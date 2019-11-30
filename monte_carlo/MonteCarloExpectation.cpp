/*
 * MonteCarloExpectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "MonteCarloExpectation.hpp"

MonteCarloExpectation::MonteCarloExpectation() {}

MonteCarloExpectation::~MonteCarloExpectation() {}

double MonteCarloExpectation::getExpectation(Random_variable* rvs) {
    /*
     * Compute the Monte Carlo expectation
     *
     */
    vector<double> vec_U = rvs-> get_sample();
    double size = vec_U.size() ;
    double mean = 0;
    for (int i = 0; i < size; ++i) {
        mean += vec_U[i];
    }
    mean = mean/(size);
    return mean;
}
