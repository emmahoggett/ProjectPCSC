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
    auto vector_sample = rvs->get_sample() ;
    for (auto p : vector_sample)
    {
        expectation_monte_carlo += p ;
    }
    expectation_monte_carlo/=vector_sample.size();
}

MonteCarloExpectation::~MonteCarloExpectation() {}

double MonteCarloExpectation::getExpectation() const{
    return expectation_monte_carlo ;
}

double MonteCarloExpectation:: calculate_expectation(const Random_variable* rvs) const
{
    double mean;
    auto vector_sample = rvs->get_sample() ;
    for (auto p : vector_sample)
    {
        mean += p ;
    }
    mean/=vector_sample.size();
    return mean ;
}
