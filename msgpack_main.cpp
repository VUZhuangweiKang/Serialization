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

double serialization(int32_t i) {
    sbuffer sbuf;
    TestCustomType my_struct = initStruct(i);
    double start_serial = currentTimeInNanoSeconds();
    pack(sbuf, my_struct);
    double end_serial = currentTimeInNanoSeconds();
    sbuf.release(); // release buffer
    return (end_serial - start_serial) / 1e3; // convert nano-sec to micro-sec;
}

double deserialization(int32_t i) {
    sbuffer sbuf;
    TestCustomType my_struct = initStruct(i);
    pack(sbuf, my_struct);

    unpacked msg; // deserialize message
    double start_deserial = currentTimeInNanoSeconds();
    unpack(&msg, sbuf.data(), sbuf.size());
    double end_deserial = currentTimeInNanoSeconds();
    sbuf.release(); // release buffer
    return (end_deserial - start_deserial)/1e3; // convert nano-sec to micro-sec;
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

    return 0;
}
