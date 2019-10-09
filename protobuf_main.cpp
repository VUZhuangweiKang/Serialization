//
// Created by zhuangwei on 10/8/19.
//
#include "utl.cpp"
#include "ProtobufCustomType.pb.h"
using namespace std;
using namespace myprotobuf;

TestCustomType initStructProto(int32_t msgID) {
    TestCustomType testCustomType;
    testCustomType.set_test_long(msgID);

    for (int i = 0; i < SIZE_OCTET_ARRAY; ++i) {
        Octet* octet = testCustomType.add_test_octet();
        octet->set_octet(to_string(i).c_str());
    }

    char str[SIZE_TEST_STR];
    sprintf(str, "Hello world! %d", msgID);
    StringTest str_test = testCustomType.test_string();
    str_test.add_char_mem(str);

    LongSeqTest long_seq = testCustomType.test_long_seq();
    StringSeqTest str_seq = testCustomType.test_string_seq();
    DoubleSeqTest double_seq = testCustomType.test_double_seq();

    for (int m = 0; m < SIZE_TEST_SEQ; ++m) {
        long_seq.add_long_mem((int32_t)m);
        StringTest* temp = str_seq.add_string_mem();
        temp->add_char_mem(str);
        double_seq.add_double_mem((double)m);
    }

    ArrayLongSeqTest array_long_seq = testCustomType.test_array_long_seq();
    SeqArrayLongSeqTest seq_array_long_seq = testCustomType.seq_array_long_seq_test();

    for (int j = 0; j < SIZE_TEST_ARRAY_SEQ; ++j) {
        LongSeqTest* temp = array_long_seq.add_array_long_seq_mem();
        for (int i = 0; i < SIZE_TEST_SEQ; ++i) {
            temp->add_long_mem((int32_t)i);
        }
    }

    for (int k = 0; k < SIZE_TEST_SEQ_ARRAY_SEQ; ++k) {
        ArrayLongSeqTest* temp1 = seq_array_long_seq.add_seq_array_long_seq_mem();
        for (int j = 0; j < SIZE_TEST_ARRAY_SEQ; ++j) {
            LongSeqTest* temp = temp1->add_array_long_seq_mem();
            for (int i = 0; i < SIZE_TEST_SEQ; ++i) {
                temp->add_long_mem((int32_t)i);
            }
        }
    }
    return testCustomType;
}

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    vector<float> serial_time(NUM_INTER), deserial_time(NUM_INTER);

    for (int32_t i = 0; i < NUM_INTER; ++i) {
        TestCustomType testCustomType = initStructProto(i);

        long long start_serial = currentTimeInNanoSeconds();
        string proto_serialized_str = testCustomType.SerializeAsString();
        long long end_serial = currentTimeInNanoSeconds();
        serial_time.push_back((end_serial - start_serial)/1e3); // convert nano-sec to micro-sec

        long long start_deserial = currentTimeInNanoSeconds();
        testCustomType.ParseFromString(proto_serialized_str);
        long long end_deserial = currentTimeInNanoSeconds();
        deserial_time.push_back((end_deserial - start_deserial)/1e3); // convert nano-sec to micro-sec

        /*
        TestCustomType my_deserialized_struct = msg.get().as<TestCustomType>();
        cout << "Msg " << i << " / Length: " << sizeof(my_deserialized_struct) << endl;
        cout << "Long: " << sizeof(my_deserialized_struct.test_long) << endl
            << "Octet: " << sizeof(my_deserialized_struct.test_octet) << endl
            << "LongSeq: " << sizeof(my_deserialized_struct.test_long_seq) << endl
            << "String: " << sizeof(my_deserialized_struct.test_string) << endl
            << "StringSeq: " << sizeof(my_deserialized_struct.test_string_seq) << endl
            << "DoubleSeq: " << sizeof(my_deserialized_struct.test_double_seq) << endl
            << "ArrayLongSeq: " << sizeof(my_deserialized_struct.test_array_long_seq) << endl
            << "SeqArrayLongSeq: " << sizeof(my_deserialized_struct.seq_array_long_seq_test)
            << endl;
        */

        if(i == 0)
            cout << "Length: " << sizeof(testCustomType) << " bytes" << endl;
    }

    cout << "===========================" << endl;
    double avg_serial_time = accumulate(serial_time.begin(), serial_time.end(), 0.0)/serial_time.size();
    double avg_deserial_time = accumulate(deserial_time.begin(), deserial_time.end(), 0.0)/deserial_time.size();

    cout << "Serialization / Deserialization : " << avg_serial_time << " / " << avg_deserial_time << " us" << endl;

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}