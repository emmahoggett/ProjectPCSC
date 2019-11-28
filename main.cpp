/*
 * main.cpp
 *
 * Project Monte Carlo :
 *  - Implementation of random number generators with a normal
 *    & uniform probability distribution
 *  - Compute the expectation value of a user defined function
 *  - Build .csv with statistical moments
 *  - Verification of the central limit theorem
 *
 * Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include <iostream>
#include <vector>

#include "AbstExpectation.hpp"
#include "MonteCarloExpectation.hpp"

#include "AbstCentralLimitThm.hpp"
#include "StandardCentralLimitThm.hpp"

#include "Random_variable.h"
#include "Uniform.h"
#include "Normal.h"

#include "Moment.hpp"

int main(int argc, char *argv[]) {
    if (argc != 6) {
        std::cout << "Missing parameter. Please run as:\n"
                  << "  ./main <mean_mu> <variance_sigma> <size_N> <alpha> <order>\n"
                  << "Aborting.\n";
        return 1;
    }

    double mu = std::atof(argv[1]);
    double sigma = std::atof(argv[2]);
    unsigned int size_N = std::atof(argv[3]);
    double alpha = std::atof(argv[4]);
    int order = std::atof(argv[5]);


    Random_variable *pRandom_variable =0;
    AbstCentralLimitThm *pCentralLimit = 0;
    AbstExpectation *pExpectation = 0;
    Moment *pMoment;


    pRandom_variable = new Normal(size_N, mu, sigma);

    pExpectation = new MonteCarloExpectation;
    double sample_expectation = pExpectation -> getExpectation(pRandom_variable);

    std::ofstream MomentFile("solution_Moment.csv");
    MomentFile.setf(std::ios::scientific);
    MomentFile.setf(std::ios::showpos);
    MomentFile.precision(9);
    if (MomentFile.is_open()) {
        pMoment->getMoment(MomentFile, pRandom_variable, order);
        MomentFile.close();
    } else {
        std::cout << "Couldn't open solution_Moment.csv. Aborting." << std::endl;
        return 1;
    }




    pCentralLimit = new StandardCentralLimitThm;
    pCentralLimit -> getCentralLimitThm(pRandom_variable, sample_expectation,alpha);





}