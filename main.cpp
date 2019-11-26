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

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Missing parameter. Please run as:\n"
                  << "  ./main <mean_mu> <variance_sigma> <size_N>\n"
                  << "Aborting.\n";
        return 1;
    }

    double mu = std::atof(argv[1]);
    double sigma = std::atof(argv[2]);
    double size_N = std::atof(argv[3]);
}