#include <msgpack.hpp>
#include "MsgPackCustomType.h"

using namespace msgpack;

TestCustomType initStruct(int32_t msgID) {
    TestCustomType customType;
    customType.test_long = (long)msgID;
    for (int i = 0; i < SIZE_OCTET_ARRAY; ++i) {
        customType.test_octet[i] = (octet) i;
    }

    sprintf(customType.test_string.test_string, "Hello world!");

    for (int j = 0; j < SIZE_TEST_SEQ; ++j) {
        customType.test_long_seq.test_long_seq[j] = customType.test_long;
        customType.test_string_seq.test_string_seq[j] = customType.test_string;
        customType.test_double_seq.test_double_seq[j] = (double)j;
    }

    for (auto & k : customType.test_array_long_seq.test_array_long_seq) {
        k = customType.test_long_seq;
    }

    for (auto & l : customType.seq_array_long_seq_test.seq_array_long_seq_test) {
        l = customType.test_array_long_seq;
    }
    return customType;
}

int main() {
    vector<float> serial_time(NUM_INTER), deserial_time(NUM_INTER);

    for (int i = 0; i < NUM_INTER; ++i) {
        TestCustomType my_struct = initStruct(i);

        long long start_serial = currentTimeInNanoSeconds();
        sbuffer sbuf; // serialize data into a simple buffer
        pack(sbuf, my_struct);
        long long end_serial = currentTimeInNanoSeconds();
        serial_time.push_back((end_serial - start_serial)/1e3); // convert nano-sec to micro-sec

        sleep(5);

        long long start_deserial = currentTimeInNanoSeconds();
        unpacked msg; // deserialize message
        unpack(&msg, sbuf.data(), sbuf.size());
        long long end_deserial = currentTimeInNanoSeconds();
        deserial_time.push_back((end_deserial - start_deserial)/1e3); // convert nano-sec to micro-sec

        if(i == 0){
            TestCustomType my_deserialized_struct = msg.get().as<TestCustomType>();
            cout << "Long: " << sizeof(my_deserialized_struct.test_long) << endl
                 << "Octet: " << sizeof(my_deserialized_struct.test_octet) << endl
                 << "LongSeq: " << sizeof(my_deserialized_struct.test_long_seq) << endl
                 << "String: " << sizeof(my_deserialized_struct.test_string) << endl
                 << "StringSeq: " << sizeof(my_deserialized_struct.test_string_seq) << endl
                 << "DoubleSeq: " << sizeof(my_deserialized_struct.test_double_seq) << endl
                 << "ArrayLongSeq: " << sizeof(my_deserialized_struct.test_array_long_seq) << endl
                 << "SeqArrayLongSeq: " << sizeof(my_deserialized_struct.seq_array_long_seq_test)
                 << endl;
            cout << "===========================" << endl;
            cout << "Length: " << sizeof(my_struct) << " bytes" << endl;
        }

        sbuf.clear(); // clear buffer
    }

    cout << "===========================" << endl;
    double avg_serial_time = accumulate(serial_time.begin(), serial_time.end(), 0.0)/serial_time.size();
    double avg_deserial_time = accumulate(deserial_time.begin(), deserial_time.end(), 0.0)/deserial_time.size();

    cout << "Serialization / Deserialization : " << avg_serial_time << " / " << avg_deserial_time << " us" << endl;

    return 0;
}
