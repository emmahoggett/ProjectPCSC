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

using namespace std;

class AbstExpectation{
public:
    // Constructor and destructor
    AbstExpectation();
    virtual ~AbstExpectation();

    // Other public methods

    virtual double getExpectation() = 0;

};

#endif /*ABSTEXPECTATION_HPP_*/
