//
// Created by zhuangwei on 10/8/19.
//

#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
#define SYSTEM_TIMESPEC struct timespec
#define NUM_INTER 10000

const long SIZE_TEST_STR = 32;
const long SIZE_TEST_SEQ = 128;
const long SIZE_TEST_ARRAY_SEQ = 4;
const long SIZE_TEST_SEQ_ARRAY_SEQ = 4;
const long SIZE_OCTET_ARRAY = 360;

long long currentTimeInNanoSeconds() {
    SYSTEM_TIMESPEC tv;
    clock_gettime(CLOCK_REALTIME, &tv);

    long long time =
            (long long)tv.tv_sec * pow(10, 9) + (long long)tv.tv_nsec;
    return time;
}