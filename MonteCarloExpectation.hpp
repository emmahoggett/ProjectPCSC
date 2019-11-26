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

class MonteCarloExpectation : public AbstExpectation{
public:
    MonteCarloExpectation();
    virtual ~MonteCarloExpectation();

    virtual double getExpectation(Random_variable* rvs) override;
};

#endif /*MONTECARLOEXPECTATION_HPP_*/
