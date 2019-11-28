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

class MonteCarloExpectation : public AbstExpectation{
public:
    MonteCarloExpectation();
    virtual ~MonteCarloExpectation();

    virtual double getExpectation(Random_variable* rvs) override;

private:
    double p_SampleExpectation;
};

#endif /*MONTECARLOEXPECTATION_HPP_*/
