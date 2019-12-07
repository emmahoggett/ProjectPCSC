/*
 * Expectation.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef ABSTEXPECTATION_HPP_
#define ABSTEXPECTATION_HPP_

#include <iostream>
#include <vector>
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"

using namespace std;

/**
 * Parent class of MonteCarloExpectation.
* \brief Abstract expectation class.
*/
class AbstExpectation{
public:

    /**
     * \brief Constructor : as a default setup.
     */
    AbstExpectation();
    /**
     * \brief Destructor : as a default setup.
     */
    virtual ~AbstExpectation();


    /**
     * \brief Public virtual method that return the computed expectation.
     *
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double getExpectation() const = 0;
    /**
     * \brief Public virtual method that compute expectation.
     * Compute the expectation with variables contained into the vector.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return  expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double calculate_expectation(const Random_variable* rvs) const =0;
    virtual void setExpectation(const Random_variable* rvs) = 0 ;

};

#endif /*ABSTEXPECTATION_HPP_*/
