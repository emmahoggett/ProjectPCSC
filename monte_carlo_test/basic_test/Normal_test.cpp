//
// Created by pierr on 01/12/2019.
//

#include "gtest/gtest.h"
#include "Normal.h"
#include "Error.hpp"
#include <cmath>


#define TEST_SIZE 50
#define TEST_MEAN 3.
#define TEST_VARIANCE 1.5


class NormalFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

    }
public:
    NormalFixture() : Test() {
        normal_sample = new Normal(TEST_SIZE, TEST_MEAN, TEST_VARIANCE);

    }

    virtual ~NormalFixture() {
        delete normal_sample;
    }
    Normal* normal_sample ;
};

TEST_F(NormalFixture, mean_sample_check) {
    EXPECT_EQ(normal_sample->get_mean(),TEST_MEAN);
}
TEST_F(NormalFixture, var_sample_check) {
    EXPECT_EQ(normal_sample->get_var(),TEST_VARIANCE);
}
TEST_F(NormalFixture, size_sample_check) {
    EXPECT_EQ(normal_sample->get_sample().size(),TEST_SIZE);
}
TEST_F(NormalFixture, negative_size_sample_check) {
    ASSERT_THROW(Normal(-TEST_SIZE, TEST_MEAN, TEST_VARIANCE),Error);
}
TEST_F(NormalFixture, negative_variance_check) {
    ASSERT_THROW(Normal(TEST_SIZE, TEST_MEAN, -TEST_VARIANCE),Error);
}