//
// Created by pierr on 29/11/2019.
//

#include <cmath>
#include <exception>

struct NegativeException : public std::exception {};

double function(double x) {

    if (x < 0.)
        throw NegativeException();

    return std::sqrt(x);
}

#include <gtest/gtest.h>

// MACRO function "TEST" from Google Test
// defines a test and a context
TEST(MysqrtTest, positive_integers) {
    EXPECT_EQ(2, function(4));
    EXPECT_EQ(4, function(16));
    EXPECT_EQ(3, function(9));
}

TEST(MysqrtTest, positive_doubles) {
    ASSERT_NEAR(std::sqrt(2), function(2), 1e-15);
    ASSERT_NEAR(std::sqrt(3), function(3), 1e-15);
}

TEST(MysqrtTest, negative) {
    // check that exception is thrown
    ASSERT_THROW(function(-1), NegativeException);
}