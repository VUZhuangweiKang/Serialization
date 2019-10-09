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

    string str = "Hello world!";
    testCustomType.mutable_test_string()->set_str_mem(str);

    for (int32_t m = 0; m < SIZE_TEST_SEQ; ++m) {
        testCustomType.mutable_test_long_seq()->add_long_mem(m);
        testCustomType.mutable_test_string_seq()->add_string_mem()->set_str_mem(str);
        testCustomType.mutable_test_double_seq()->add_double_mem((double)m);
    }

    for (int32_t j= 0; j < SIZE_TEST_ARRAY_SEQ; ++j) {
        LongSeqTest *long_seq = testCustomType.mutable_test_array_long_seq()->add_long_seq_mem();
        for (int32_t i = 0; i < SIZE_TEST_SEQ; ++i) {
            long_seq->add_long_mem(i);
        }
    }

    for (int k = 0; k < SIZE_TEST_SEQ_ARRAY_SEQ; ++k) {
        ArrayLongSeqTest *arrayLongSeqTest = testCustomType.mutable_seq_array_long_seq_test()->add_array_long_seq_mem();
        for (int32_t j= 0; j < SIZE_TEST_ARRAY_SEQ; ++j) {
            LongSeqTest *long_seq = arrayLongSeqTest->add_long_seq_mem();
            for (int32_t i = 0; i < SIZE_TEST_SEQ; ++i) {
                long_seq->add_long_mem(i);
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

        if(i == 0){
            cout << "Long: " << sizeof(testCustomType.test_long()) << endl
                 << "Octet: " << testCustomType.test_octet_size() << endl
                 << "LongSeq: " << testCustomType.test_long_seq().ByteSizeLong() << endl
                 << "String: " << testCustomType.test_string().ByteSizeLong() << endl
                 << "StringSeq: " << testCustomType.test_string_seq().ByteSizeLong() << endl
                 << "DoubleSeq: " << testCustomType.test_double_seq().ByteSizeLong() << endl
                 << "ArrayLongSeq: " << testCustomType.test_array_long_seq().ByteSizeLong() << endl
                 << "SeqArrayLongSeq: " << testCustomType.seq_array_long_seq_test().ByteSizeLong()
                 << endl;
            cout << "===========================" << endl;
            cout << "Length: " << testCustomType.ByteSizeLong() << " bytes" << endl;
        }
    }

    cout << "===========================" << endl;
    double avg_serial_time = accumulate(serial_time.begin(), serial_time.end(), 0.0)/serial_time.size();
    double avg_deserial_time = accumulate(deserial_time.begin(), deserial_time.end(), 0.0)/deserial_time.size();

    cout << "Serialization / Deserialization : " << avg_serial_time << " / " << avg_deserial_time << " us" << endl;

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}