//
// Created by zhuangwei on 10/8/19.
//

#include <iostream>
#include <numeric>
#include <cmath>
#include <unistd.h>
using namespace std;
#define SYSTEM_TIMESPEC struct timespec
#define NUM_INTER 10

const long SIZE_TEST_STR = 16;
const long SIZE_TEST_SEQ = 128;
const long SIZE_TEST_ARRAY_SEQ = 4;
const long SIZE_TEST_SEQ_ARRAY_SEQ = 4;
const long SIZE_OCTET_ARRAY = 360;

double currentTimeInNanoSeconds() {
    SYSTEM_TIMESPEC tv;
    clock_gettime(CLOCK_REALTIME, &tv);

    double time = tv.tv_sec * 1e9 + tv.tv_nsec;
    return time;
}