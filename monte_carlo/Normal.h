/*
 * Normal.h
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef NORMAL_GENERATOR_H_
#define NORMAL_GENERATOR_H_

#include "Uniform.h"
/**
 * This class is a derived class of Uniform. The construction of random variable that has a normal distribution is based on the inverse cumulative distribution (CDF). In fact taking the inverse
 * normal CDF of a uniform sample gets a normal sample.
 */

/**
 * \brief  Create a random variable from a normal distribution.
 */
class Normal : public Uniform {

public:
    /**
     * \brief Default constructor.
     *
     * Compute a sample from the standard normal distribution of variance 1 centred in 0 .
     * @param N : Positive integer that define the size of the vector.
     */
    Normal( const int N);

    /**
     * \brief Constructor.
     *
     * Compute a sample from the normal distribution of variance var centred in mu.
     * @param N : Positive integer that define the size of the vector.
     * @param mu : Float number that defines the mean.
     * @param var : Positive float number, which is the variance.
     */
    Normal(const int N , const double mu , const double var);

    /**
     * \brief Return the normal and uniform vector.
     * @return A vector that contain the sample of the random variable.
     */

    virtual std::vector<double> get_sample() const { return N_m;}


    /**
     *  \brief Return the mean of the normal distribution that the sample comes from .
     * @return Mean of the normal and uniform distribution.
     */
    virtual double get_mean() const { return mean_normal;}

    /**
     * \breif Return the variance of the normal distribution that the sample comes from .
     * @return Variance of the normal and uniform distribution.
     */
    virtual double get_var() const { return var_normal;}

    /**
     * \brief Return the size of the sample.
     * @return Size of the vector of the normal sample.
     */
    virtual int get_size() const {return N_m.size(); }

private:
    void set_var(const double var) ;
    std::vector<double> N_m ;
    double mean_normal ;
    double var_normal ;
};

#endif /*NORMAL_GENERATOR_H_*/
