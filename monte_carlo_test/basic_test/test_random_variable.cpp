//
// Created by pierr on 26/11/2019.
//
#include <iostream>
#include "Random_variable.h"
#include "Uniform.h"
#include <gtest/gtest.h>
#include <cmath>
#include <exception>
#include "Normal.h"
#include <string>



int main(int argc , char* argv[])
{

    Random_variable* rvs(0) ;
    rvs = new Normal(10, 2 , 2);
    rvs->get_mean();
    rvs->get_var();
    auto vec(rvs->get_sample());
    for (auto p : vec)
    { std::cout << p<<"\n"; }
    std::cout<<" the mean is "<<rvs->get_mean()<<std::endl ;
    std::cout<<" the var is "<<rvs->get_var()<<std::endl ;

}