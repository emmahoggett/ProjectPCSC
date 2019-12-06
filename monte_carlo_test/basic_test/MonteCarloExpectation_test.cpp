//
// Created by pierr on 06/12/2019.
//
#include "gtest/gtest.h"
#include "Uniform.h"
#include "Normal.h"
#include "Error.hpp"
#include "MonteCarloExpectation.hpp"
#include <cmath>


#define TEST_SIZE 1000
#define TEST_UPPER_BOUND 3.
#define TEST_LOWER_BOUND 1.5
#define TEST_MEAN 3.
#define TEST_VARIANCE 1.5

class MonteCarloExpectationFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

        true_mean_uniform = (TEST_UPPER_BOUND + TEST_LOWER_BOUND)/2. ;

    }
public:
    MonteCarloExpectationFixture() : Test() {
        uniform_sample =  new Uniform(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);
        normal_sample = new Normal(TEST_SIZE ,TEST_MEAN , TEST_VARIANCE ) ;
        mc_uniform = new MonteCarloExpectation(uniform_sample);
        mc_normal = new MonteCarloExpectation( normal_sample ) ;
        mc = new MonteCarloExpectation();
    }

    virtual ~MonteCarloExpectationFixture() {
        delete mc_uniform;
        delete mc_normal ;
        delete mc;
        delete uniform_sample;
        delete normal_sample ;
    }
    Random_variable* uniform_sample ;
    Random_variable* normal_sample ;
    MonteCarloExpectation* mc_uniform ;
    MonteCarloExpectation* mc_normal;
    MonteCarloExpectation* mc;
    double true_mean_uniform ;
};

TEST_F(MonteCarloExpectationFixture, mean_uniform_get_check) {
    ASSERT_NEAR(mc_uniform->getExpectation(), true_mean_uniform,1e-1);
}
TEST_F(MonteCarloExpectationFixture, mean_normal_get_check) {
    ASSERT_NEAR(mc_normal->getExpectation(),TEST_MEAN,1e-1);
}
TEST_F(MonteCarloExpectationFixture, mean_uniform_calculation_check) {
    ASSERT_NEAR(mc->calculate_expectation(uniform_sample),true_mean_uniform,1e-1);
}
TEST_F(MonteCarloExpectationFixture, mean_normal_calculation_check) {
    ASSERT_NEAR(mc->calculate_expectation(normal_sample),TEST_MEAN,1e-1);
}
