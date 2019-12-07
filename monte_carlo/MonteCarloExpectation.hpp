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
 */
class MonteCarloExpectation : public AbstExpectation{
public:
    /**
     * \brief Constructor : set as default.
     */
    MonteCarloExpectation();
<<<<<<< HEAD
    /**
     * \brief Constructor: already computes the monte carlo expectation.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     */
||||||| merged common ancestors

=======
>>>>>>> 1538760dddf6454395021e39da1d9cb96bb8891d
    MonteCarloExpectation(const Random_variable* rvs);
    /**
     * \brief Destructor : set as default.
     */
    virtual ~MonteCarloExpectation();

    /**
     * \brief Return the computed expectation, with Monte car.
     *
     * Method that compute the expectation , which is the mean over all vector elements.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return The computed expectation of the rvs vector, which is a float number.
     */
    virtual double getExpectation() const override;
/**
 * \brief Compute the expectation.

 * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
 * distribution.
 * @return The resulting expectation of the rvs vector, which is a float number.
 */
    virtual double calculate_expectation(const Random_variable* rvs) const;

/**
 * \brief Set the expectation
 * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
 * distribution.
 */
    virtual void setExpectation(const Random_variable* rvs) override ;

private:
    double expectation_monte_carlo;

};

#endif /*MONTECARLOEXPECTATION_HPP_*/
