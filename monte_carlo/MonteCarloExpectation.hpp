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
 * \brief Contains method to compute Monte Carlo expectation.
 *
 * It's a method that compute an unbiased estimator of the expectation of a random variable.
 * Child of AbstExpectation.
 */
class MonteCarloExpectation : public AbstExpectation{
public:
    /**
     * \brief Default constructor.
     */
    MonteCarloExpectation();
    /**
     * \brief Constructor: already computes the monte carlo expectation.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     */

    MonteCarloExpectation(const Random_variable* rvs);
    /**
     * \brief Default destructor.
     */
    virtual ~MonteCarloExpectation();

    /**
     * \brief Return the computed expectation.
     *
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return The computed expectation of the rvs vector, which is a float number.
     */
    virtual double getExpectation() const override;
/**
 * \brief Compute the expectation.
 *
 * The expectation is computed with a user defined function, such that E[f(x)] is calculated
 * by this method.
 * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
 * distribution.
 * @return Expectation of the rvs vector, which is a float number.
 */
    virtual double calculate_expectation(const Random_variable* rvs) const;

/**
 * \brief Set the expectation.
 * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
 * distribution.
 */
    virtual void setExpectation(const Random_variable* rvs) override ;

private:
    double expectation_monte_carlo;

};

#endif /*MONTECARLOEXPECTATION_HPP_*/
