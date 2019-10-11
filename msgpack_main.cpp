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

void showMsgSize() {
    TestCustomType sample = initStruct(0);
    cout << "sample = " << sizeof(sample) << endl;
    cout << "sample.test_long = " << sizeof(sample.test_long) << endl;
    cout << "sample.test_octet = " << sizeof(sample.test_octet) << endl;
    cout << "sample.test_string = " << sizeof(sample.test_string) << endl;
    cout << "sample.test_long_seq = " << sizeof(sample.test_long_seq) << endl;
    cout << "sample.test_string_seq = " << sizeof(sample.test_string_seq) << endl;
    cout << "sample.test_double_seq = " << sizeof(sample.test_double_seq) << endl;
    cout << "sample.test_array_long_seq = " << sizeof(sample.test_array_long_seq) << endl;
    cout << "sample.seq_array_long_seq_test = " << sizeof(sample.seq_array_long_seq_test) << endl;
}

double serialization(int32_t i) {
    size_t maxSerializeSample = 0;
    TestCustomType my_struct = initStruct(i);
    sbuffer temp_sbuf;
    pack(temp_sbuf, my_struct);
    maxSerializeSample = temp_sbuf.size();

    auto start_serial = currentTime();
    sbuffer sbuf(maxSerializeSample);
    pack(sbuf, my_struct);
    auto end_serial = currentTime();
    sbuf.release(); // release buffer
    return std::chrono::duration_cast<std::chrono::microseconds>(end_serial-start_serial).count();
}

double deserialization(int32_t i) {
    TestCustomType my_struct = initStruct(i);
    sbuffer sbuf;
    pack(sbuf, my_struct);

    unpacked msg; // deserialize message
    auto start_deserial = currentTime();
    unpack(&msg, sbuf.data(), sbuf.size());
    auto end_deserial = currentTime();
    sbuf.release(); // release buffer
    return std::chrono::duration_cast<std::chrono::microseconds>(end_deserial-start_deserial).count();
}

int main() {
    double serial_time = 0.0, deserial_time = 0.0;

    for (int i = 0; i < NUM_INTER; ++i) {
        serial_time += serialization(i);
        deserial_time += deserialization(i);
    }

    double avg_serial_time = serial_time/NUM_INTER;
    double avg_deserial_time = deserial_time/NUM_INTER;

    cout << "Serialization / Deserialization : " << avg_serial_time << " / " << avg_deserial_time << " us" << endl;
    showMsgSize();
    return 0;
}
