//
// Created by 康壮伟 on 2019-10-07.
//

#include "../utl.cpp"
#include <msgpack.hpp>

#ifndef MSGPACK_CUSTOMTYPE_H
#define MSGPACK_CUSTOMTYPE_H

typedef unsigned char octet;

typedef struct LongSeqTest {
    int32_t test_long_seq[SIZE_TEST_SEQ];
    MSGPACK_DEFINE(test_long_seq);
}LongSeqTest;

typedef struct DoubleSeqTest {
    double test_double_seq[SIZE_TEST_SEQ];
    MSGPACK_DEFINE(test_double_seq);
}DoubleSeqTest;

typedef struct StringTest {
    char test_string[SIZE_TEST_STR];
    MSGPACK_DEFINE(test_string);
}StringTest;

typedef struct StringSeqTest {
    StringTest test_string_seq[SIZE_TEST_SEQ];
    MSGPACK_DEFINE(test_string_seq);
}StringSeqTest;

typedef struct ArrayLongSeqTest {
    LongSeqTest test_array_long_seq[SIZE_TEST_ARRAY_SEQ];
    MSGPACK_DEFINE(test_array_long_seq);
}ArrayLongSeqTest;

typedef struct SeqArrayLongSeqTest {
    ArrayLongSeqTest seq_array_long_seq_test[SIZE_TEST_SEQ_ARRAY_SEQ];
    MSGPACK_DEFINE(seq_array_long_seq_test);
}SeqArrayLongSeqTest;

typedef struct TestCustomType {
    int32_t test_long;
    octet test_octet[SIZE_OCTET_ARRAY];
    LongSeqTest test_long_seq;
    StringTest test_string;
    StringSeqTest test_string_seq;
    DoubleSeqTest test_double_seq;
    ArrayLongSeqTest test_array_long_seq;
    SeqArrayLongSeqTest seq_array_long_seq_test;

    MSGPACK_DEFINE(test_long, test_octet, test_long_seq, test_string, test_string_seq, test_double_seq, test_array_long_seq, seq_array_long_seq_test);

}TestCustomType;


#endif //MSGPACK_CUSTOMTYPE_H
