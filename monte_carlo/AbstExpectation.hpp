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
* Abstract expectation class
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
     * @param rvs : Random_variable
     * @return expectation : double
     */
    virtual double getExpectation(Random_variable* rvs) = 0;

};

#endif /*ABSTEXPECTATION_HPP_*/
