//
// Created by pierr on 07/12/2019.
//


#include "gtest/gtest.h"
#include "Error.hpp"
#include "Random_variable.h"
#include "AbstInput.hpp"
#include "InputNormal.hpp"
#include "InputUniform.hpp"


#define TEST_PATH "TestNormal.dat"
#define TEST_PATH_SIZE "TestNormal_size.dat"
#define TEST_PATH_MEAN "TestNormal_mean.dat"
#define TEST_PATH_VAR "TestNormal_var.dat"

#define TEST_PATH_UNIFORM "DefaultUniform.dat"



class InputFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {
        delete randomsample ;
    }

    virtual void SetUp() {
        alpha = 0.05 ;
        alpha_bad = 2. ;

        order = 1 ;
        order_bad = -2 ;
        randomsample = 0 ;
    }
public:
    InputFixture() : Test() {

        pInput = new InputNormal;
        pInput_uniform = new InputUniform ;
                
        

    }

    virtual ~InputFixture() {
        delete pInput ;
        delete pInput_uniform ;
    }

    Random_variable* randomsample ;
    AbstInput *pInput ;
    AbstInput* pInput_uniform ;
    double alpha ;
    double alpha_bad ;
    int order ;
    int order_bad ;
};

TEST_F(InputFixture, input_normal_size_check) {
    ASSERT_THROW( pInput ->read(randomsample,alpha,order, TEST_PATH_SIZE),Error);
}
TEST_F(InputFixture, input_normal_variance_check) {
    ASSERT_THROW(pInput ->read(randomsample,alpha,order, TEST_PATH_VAR),Error);
}
TEST_F(InputFixture, input_normal_mean_check) {
    ASSERT_THROW(pInput ->read(randomsample,alpha,order, TEST_PATH_MEAN),Error);
}
TEST_F(InputFixture, input_normal_alpha_check) {
    ASSERT_THROW(pInput ->read(randomsample,alpha_bad,order, TEST_PATH),Error);
}
TEST_F(InputFixture, input_normal_order_check) {
    ASSERT_THROW(pInput ->read(randomsample,alpha,order_bad, TEST_PATH),Error);
}
TEST_F(InputFixture, input_uniform_size_check) {
    ASSERT_THROW( pInput_uniform ->read(randomsample,alpha,order, TEST_PATH_SIZE),Error);
}
TEST_F(InputFixture, input_uniform_lower_bound_check) {
    ASSERT_THROW(pInput_uniform ->read(randomsample,alpha,order, TEST_PATH_MEAN),Error);
}
TEST_F(InputFixture, input_uniform_upper_bound_check) {
    ASSERT_THROW(pInput_uniform ->read(randomsample,alpha,order, TEST_PATH_VAR),Error);
}
TEST_F(InputFixture, input_uniform_alpha_check) {
    ASSERT_THROW(pInput_uniform ->read(randomsample,alpha_bad,order, TEST_PATH_UNIFORM),Error);
}
TEST_F(InputFixture, input_uniform_order_check) {
    ASSERT_THROW(pInput_uniform ->read(randomsample,alpha,order_bad, TEST_PATH_UNIFORM),Error);
}