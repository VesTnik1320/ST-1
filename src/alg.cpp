// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    if (value <= 1)
        return false;

    uint64_t count = 0;
    for (uint64_t i = 2; i < value; i++) {
        if (value % i == 0) {
            count++;
        }
    }

    return count == 0;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) return 0;

    uint64_t count = 0;
    uint64_t num = 1;

    while (count < n) {
        num++;
        if (checkPrime(num)) {
            count++;
        }
    }

    return num;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t num = value + 1;

    while (!checkPrime(num)) {
        num++;
    }

    return num;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;

    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }

    return sum;
}