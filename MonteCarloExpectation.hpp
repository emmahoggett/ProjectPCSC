/*
 * MonteCarloExpectation.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MONTECARLOEXPECTATION_HPP
#define MONTECARLOEXPECTATION_HPP

#include "Expectation.hpp"

class MonteCarloExpectation : public Expectation{
public:
    MonteCarloExpectation();
    virtual ~MonteCarloExpectation();

    virtual double GetExpectation(vector<double> vec_U) override;
};

#endif /*MONTECARLOEXPECTATION_HPP*/
