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
* Abstract expectation class : Mother class of Monte Carlo Exception
*/
class AbstExpectation{
public:

    /**
     * Constructor
     */
    AbstExpectation();
    /**
     * Destructor
     */
    virtual ~AbstExpectation();


    /**
     * Public virtual method that compute Expectation
     * @param rvs : Random_variable data type which contain a vector, and other relevant information
     * about the vector.
     * @return expectation : float that correspond to the mean of values in the vector given by Random_variable
     */
    virtual double getExpectation() const = 0;
    virtual double calculate_expectation(const Random_variable* rvs) const =0;

};

#endif /*ABSTEXPECTATION_HPP_*/
