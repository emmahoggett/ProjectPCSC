/*
 * MonteCarloExpectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "MonteCarloExpectation.hpp"

MonteCarloExpectation::MonteCarloExpectation() {}
MonteCarloExpectation::MonteCarloExpectation(const Random_variable* rvs)
{
    expectation_monte_carlo = calculate_expectation(rvs);
}

MonteCarloExpectation::~MonteCarloExpectation() {}

double MonteCarloExpectation::getExpectation() const{
    return expectation_monte_carlo ;
}

double MonteCarloExpectation:: calculate_expectation(const Random_variable* rvs) const
{
    double mean(0.);
    auto vector_sample = rvs->get_sample() ;
    for(auto vec : vector_sample)
    {
        mean += computeOperator(vec) ;
    }
    mean/=vector_sample.size();
    return mean ;
}

void MonteCarloExpectation:: setExpectation(const Random_variable* rvs)
{
    expectation_monte_carlo = calculate_expectation(rvs) ;
}