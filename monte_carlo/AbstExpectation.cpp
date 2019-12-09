/*
 * Expectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#include "AbstExpectation.hpp"
double defaultfunction(double y){ return y ;}

AbstExpectation::AbstExpectation():
function(defaultfunction) , is_set(false)
{}
AbstExpectation::~AbstExpectation() {}

void AbstExpectation::setOperator(double (*f)(double y)) {
    function = f;
    is_set = true ;
}

double AbstExpectation::computeOperator(double y) const {
    return function(y);
}

bool AbstExpectation::isFunctionSet() const
{
    return is_set ;
}