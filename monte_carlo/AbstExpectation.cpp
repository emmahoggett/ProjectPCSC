/*
 * Expectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#include "AbstExpectation.hpp"


AbstExpectation::AbstExpectation() {}
AbstExpectation::~AbstExpectation() {}

void AbstExpectation::setProbabilityDistribution(double (*f)(double y)) {
    f_rhs = f;
}

double AbstExpectation::probabilityDistribution(double y) const {
    return f_rhs(y);
}