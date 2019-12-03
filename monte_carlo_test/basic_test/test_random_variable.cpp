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
#include "AbstExpectation.hpp"
#include "MonteCarloExpectation.hpp"
#include <string>
#include <AbstCentralLimitThm.hpp>
#include "StandardCentralLimitThm.hpp"

int main(int argc , char* argv[]) {

    Random_variable *rvs(0);
    rvs = new Normal(1000, 2, 2);
    rvs->get_mean();
    rvs->get_var();
    auto vec(rvs->get_sample());
    for (auto p : vec) { //std::cout << p << "\n";
         }
    std::cout << " the mean is " << rvs->get_mean() << std::endl;
    std::cout << " the var is " << rvs->get_var() << std::endl;
    AbstExpectation *methode(0);
    methode = new MonteCarloExpectation();
    auto mean_mc(methode->calculate_expectation(rvs));
    std::cout << " the mean of monte carlo is " << mean_mc << std::endl;

    AbstCentralLimitThm *centralLimit(0);
    centralLimit = new StandardCentralLimitThm();
    centralLimit->calculate_CentralLimiteThm(rvs, mean_mc, 0.99);
    std::cout << " the confidence interval is [" << centralLimit->get_interval()[0] << " ;"
              << centralLimit->get_interval()[1] << "]";


}
