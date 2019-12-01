//
// Created by pierr on 01/12/2019.
//

#include "gtest/gtest.h"
#include "Uniform.h"
#include "Error.hpp"
#include <cmath>


#define TEST_SIZE 50
#define TEST_UPPER_BOUND 3.
#define TEST_LOWER_BOUND 1.5


class UniformFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

        mean = (TEST_UPPER_BOUND + TEST_LOWER_BOUND)/2. ;
        var = pow(TEST_UPPER_BOUND+TEST_LOWER_BOUND,2)/12.0 ;
    }
public:
    UniformFixture() : Test() {
        uniform_sample = new Uniform(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);

    }

    virtual ~UniformFixture() {
        delete uniform_sample;
    }
    Uniform* uniform_sample;
    double mean ;
    double var ;
};

TEST_F(UniformFixture, mean_sample_check) {
    EXPECT_EQ(mean,uniform_sample->get_mean());
}
TEST_F(UniformFixture, var_sample_check) {
    EXPECT_EQ(var,uniform_sample->get_var());
}
TEST_F(UniformFixture, size_sample_check) {
    EXPECT_EQ(TEST_SIZE,uniform_sample->get_sample().size());
}
TEST_F(UniformFixture, negative_size_sample_check) {
    ASSERT_THROW(Uniform(-TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND),Error);
}
TEST_F(UniformFixture, interval_check) {
    ASSERT_THROW(Uniform(TEST_SIZE, TEST_UPPER_BOUND, TEST_LOWER_BOUND),Error);
}
