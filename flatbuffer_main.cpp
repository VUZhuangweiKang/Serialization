//
// Created by zhuangwei on 10/11/19.
//

#include "flatbuffer_main.h"
#include "flatbuffers/flatbuffers.h"
#include "flatbufIDL_generated.h"
#include "utl.cpp"

using namespace FlatBufTest;
using namespace std;


pair<double, double> initStruct(int32_t key) {
    flatbuffers::FlatBufferBuilder builder;
    TestCustomTypeBuilder testCustomTypeBuilder(builder);
    testCustomTypeBuilder.add_test_long(key);

    vector<int8_t> octets(SIZE_OCTET_ARRAY, key);
    auto temp = builder.CreateVector(octets);
    testCustomTypeBuilder.add_test_octet(temp);

    vector<int8_t> str(SIZE_TEST_STR);
    string t_str = "Hello World!";
    copy(t_str.begin(), t_str.end(), back_inserter(str));
    auto temp1 = builder.CreateVector(str);
    auto my_str = CreateStringTest(builder, temp);
    testCustomTypeBuilder.add_test_string(my_str);

    vector<int32_t> long_seq_v;
    vector<flatbuffers::Offset<StringTest>> str_seq_v;
    vector<double> double_seq_v;

    for (int i = 0; i < SIZE_TEST_SEQ; ++i) {
        long_seq_v.emplace_back((int32_t)i);
        str_seq_v.push_back(my_str);
        double_seq_v.emplace_back((double)i);
    }
    auto long_seq = CreateLongSeqTest(builder, builder.CreateVector(long_seq_v));
    testCustomTypeBuilder.add_test_long_seq(long_seq);
    testCustomTypeBuilder.add_test_string_seq(CreateStringSeqTest(builder, builder.CreateVector(str_seq_v)));
    testCustomTypeBuilder.add_test_double_seq(CreateDoubleSeqTest(builder, builder.CreateVector(double_seq_v)));

    vector<flatbuffers::Offset<LongSeqTest>> array_long_seq_v;
    for (int j = 0; j < SIZE_TEST_ARRAY_SEQ; ++j)
        array_long_seq_v.push_back(long_seq);
    auto array_long_seq = CreateArrayLongSeqTest(builder, builder.CreateVector(array_long_seq_v));
    testCustomTypeBuilder.add_test_array_long_seq(array_long_seq);

    vector<flatbuffers::Offset<ArrayLongSeqTest>> seq_array_long_seq_v;
    for (int k = 0; k < SIZE_TEST_SEQ_ARRAY_SEQ; ++k)
        seq_array_long_seq_v.push_back(array_long_seq);
    testCustomTypeBuilder.add_seq_array_long_seq_test(CreateSeqArrayLongSeqTest(builder, builder.CreateVector(seq_array_long_seq_v)));

    auto start_serial = currentTime();
    auto done = testCustomTypeBuilder.Finish();
    builder.Finish(done);
    uint8_t *buf = builder.GetBufferPointer();
    auto end_serial = currentTime();

    double serialization_time = std::chrono::duration_cast<std::chrono::microseconds>(end_serial-start_serial).count();

    auto start_deserial = currentTime();
    auto test_custom_type = GetTestCustomType(buf);
    auto end_deserial = currentTime();
    double deserialization_time =  std::chrono::duration_cast<std::chrono::microseconds>(end_deserial-start_deserial).count();;

    if(key == 0) {
        cout << "Serialized Message Size: " << builder.GetSize() << endl;
        cout << test_custom_type->test_string() << endl;
    }
    return make_pair(serialization_time, deserialization_time);
}


int main() {
    initStruct(1);
}