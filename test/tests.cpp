// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, CheckPrimeWith23And29) {
    EXPECT_TRUE(checkPrime(23));
    EXPECT_TRUE(checkPrime(29));
}

TEST(CheckPrimeTest, CheckNotPrimeWith52And54) {
    EXPECT_FALSE(checkPrime(52));
    EXPECT_FALSE(checkPrime(54));
}

TEST(CheckPrimeTest, CheckBigPrimeWith971And977) {
    EXPECT_TRUE(checkPrime(971));
    EXPECT_TRUE(checkPrime(977));
}

TEST(CheckPrimeTest, CheckBigNotPrimeWith979And989) {
    EXPECT_FALSE(checkPrime(979));
    EXPECT_FALSE(checkPrime(989));
}

TEST(NPrimeTest, CheckNPrimeZeroIndex) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(NPrimeTest, CheckNPrimeFirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, CheckNPrimeFirstFewPrimes) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrimeTest, CheckNPrimeLargerN) {
    EXPECT_EQ(nPrime(15), 47);
    EXPECT_EQ(nPrime(20), 71);
}

TEST(NextPrimeTest, NextPrimeFromZeroCheck) {
    EXPECT_EQ(nextPrime(0), 2);
}

TEST(NextPrimeTest, NextPrimeFromOneCheck) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(NextPrimeTest, NextPrimeAfterPrimeInputCheckWith17And19) {
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(19), 23);
}

TEST(NextPrimeTest, HandlesCompositeInputCheckWith50And60) {
    EXPECT_EQ(nextPrime(50), 53);
    EXPECT_EQ(nextPrime(60), 61);
}

TEST(SumPrimeTest, HandlesBoundaryLessThanTwo) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, CheckSumForMultipleBounds) {
    EXPECT_EQ(sumPrime(4), 5);
    EXPECT_EQ(sumPrime(16), 41);
    EXPECT_EQ(sumPrime(21), 77);
    EXPECT_EQ(sumPrime(32), 160);
    EXPECT_EQ(sumPrime(48), 328);
}

TEST(SumPrimeTest, CheckHandlesBoundWithOnlyOnePrime) {
    EXPECT_EQ(sumPrime(3), 2);
}
