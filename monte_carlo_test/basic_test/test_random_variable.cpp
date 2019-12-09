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
#include "Convergence.h"
#include "AbstOutput.h"

int main(int argc , char* argv[]) {

    Random_variable *rvs(0);
    rvs = new Normal(100, 2, 2);
    AbstExpectation *methode(0);
    methode = new MonteCarloExpectation();
    AbstCentralLimitThm *centralLimit(0);
    centralLimit = new StandardCentralLimitThm();
    AbstOutput* output ;
    output = new Convergence(centralLimit,methode,rvs,0.05);
    output->writefile("convergence.csv");

}
