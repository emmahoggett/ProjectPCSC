//
// Created by pierr on 06/12/2019.
//

#include "gtest/gtest.h"
#include "Uniform.h"
#include "Normal.h"
#include "Error.hpp"
#include "MonteCarloExpectation.hpp"
#include "StandardCentralLimitThm.hpp"
#include <cmath>


#define TEST_SIZE 1000
#define TEST_UPPER_BOUND 3.
#define TEST_LOWER_BOUND 1.5
#define TEST_MEAN 3.
#define TEST_VARIANCE 1.5

class StandardCentrallLimitThmFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

    }
public:
    StandardCentrallLimitThmFixture() : Test() {
        uniform_sample =  new Uniform(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);
        normal_sample = new Normal(TEST_SIZE ,TEST_MEAN , TEST_VARIANCE ) ;
        mc_uniform = new MonteCarloExpectation(uniform_sample);
        mc_normal = new MonteCarloExpectation( normal_sample ) ;
        st_central_limite = new StandardCentralLimitThm() ;
    }

    virtual ~StandardCentrallLimitThmFixture() {
        delete mc_uniform;
        delete mc_normal ;
        delete uniform_sample;
        delete normal_sample ;
        delete st_central_limite ;
    }
    Random_variable* uniform_sample ;
    Random_variable* normal_sample ;
    MonteCarloExpectation* mc_uniform ;
    MonteCarloExpectation* mc_normal;
    AbstCentralLimitThm* st_central_limite ;
};

TEST_F(StandardCentrallLimitThmFixture, uniform_central_limite_check) {
    st_central_limite->calculate_CentralLimitThm(uniform_sample,mc_uniform->getExpectation(),0.05);
    EXPECT_TRUE(st_central_limite->is_verified());
}
TEST_F(StandardCentrallLimitThmFixture, normal_central_limite_check) {
    st_central_limite->calculate_CentralLimitThm(normal_sample,mc_normal->getExpectation(),0.05);
    EXPECT_TRUE(st_central_limite->is_verified());
}
