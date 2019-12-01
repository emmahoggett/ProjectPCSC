/*
 * MonteCarloExpectation.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MONTECARLOEXPECTATION_HPP_
#define MONTECARLOEXPECTATION_HPP_

#include "AbstExpectation.hpp"
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"

/**
 * Child of AbstExpectation
 * Override getExpectation which compute the Monte Carlo Expectation
 */
class MonteCarloExpectation : public AbstExpectation{
public:
    /**
     * Constructor of the class MonteCarloExpectation
     */
    MonteCarloExpectation();
    /**
     * Destructor of the class MonteCarloExpectation
     */
    virtual ~MonteCarloExpectation();

    /**
     * Compute the expectation of the vector in rvs
     * @param rvs : random_variable data type defined by the user, contain a vector,
     * the mean and the variance of the vector
     * @return Return the expectation of the rvs vector, which is the mean over all vector elements
     */
    virtual double getExpectation(Random_variable* rvs) override;

};

#endif /*MONTECARLOEXPECTATION_HPP_*/
