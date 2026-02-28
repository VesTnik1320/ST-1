// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, CheckNotPrime1) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, CheckPrime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrimeTest, CheckNotPrime2) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
}

TEST(CheckPrimeTest, CheckBigPrime) {
    EXPECT_TRUE(checkPrime(997));      
    EXPECT_TRUE(checkPrime(1009));     
}

TEST(CheckPrimeTest, CheckBigNotPrime) {
    EXPECT_FALSE(checkPrime(1000));    
    EXPECT_FALSE(checkPrime(1001));    
}

// Тесты для функции nPrime
TEST(NPrimeTest, nPrimeZero) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(NPrimeTest, nPrimeFirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, nPrimeFirstFewPrimes) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrimeTest, nPrimeLargerN) {
    EXPECT_EQ(nPrime(15), 47);
    EXPECT_EQ(nPrime(20), 71);
}

// Тесты для функции nextPrime
TEST(NextPrimeTest, nextPrimeZero) {
    EXPECT_EQ(nextPrime(0), 2);
}

TEST(NextPrimeTest, nextPrimeOne) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(NextPrimeTest, nextPrimePrimeInput) {
    EXPECT_EQ(nextPrime(2), 3);   
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(7), 11);
}

TEST(NextPrimeTest, HandlesCompositeInput) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(9), 11);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, HandlesLargeGap) {
    EXPECT_EQ(nextPrime(113), 127);
    EXPECT_EQ(nextPrime(114), 127);
    EXPECT_EQ(nextPrime(126), 127);
}

// Тесты для функции sumPrime
TEST(SumPrimeTest, HandlesBoundaryLessThanTwo) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);   
}

TEST(SumPrimeTest, HandlesSmallBounds) {
    EXPECT_EQ(sumPrime(3), 2);          
    EXPECT_EQ(sumPrime(4), 2);          
    EXPECT_EQ(sumPrime(5), 5);           
    EXPECT_EQ(sumPrime(6), 5);           
    EXPECT_EQ(sumPrime(7), 10);         
    EXPECT_EQ(sumPrime(8), 10);          
    EXPECT_EQ(sumPrime(9), 17);          
    EXPECT_EQ(sumPrime(10), 17);        
}

TEST(SumPrimeTest, HandlesBoundEqualToPrime) {
    EXPECT_EQ(sumPrime(11), 17);
}

TEST(SumPrimeTest, HandlesMediumBound) {
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, HandlesBoundWithOnlyOnePrime) {
    EXPECT_EQ(sumPrime(3), 2);   
}
