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

class Normal : public Uniform {
public:
    /**
     * Constructor : compute an uniform and normal distribution vector. The mean and the standard
     * deviation is set as default, respectively 1 and 0.
     * @param N : Positive integer that define the size of the vector.
     */
    Normal( const int N);

    /**
     * Constructor : compute an uniform and normal distribution vector.
     * @param N : Positive integer that define the size of the vector.
     * @param mu : Float number that define the mean.
     * @param var : Positive float number.
     */
    Normal(const int N , const double mu , const double var);

    /**
     * Return the normal and uniform vector.
     * @return
     */

    virtual std::vector<double> get_sample() const { return N_m;}

    /**
     * Return the mean of the normal and uniform transformation.
     * @return mean of the normal and uniform distribution.
     */
    virtual double get_mean() const { return mean_normal;}

    /**
     * Return the variance of the normal and uniform transformation.
     * @return variance of the normal and uniform distribution.
     */
    virtual double get_var() const { return var_normal;}

    /**
     * Return the size of the vector of the normal and uniform transformation.
     * @return size of the vector of the normal and uniform transformation.
     */
    virtual int get_size() const {return N_m.size(); }

private:
    void set_var(const double var) ;
    std::vector<double> N_m ;
    double mean_normal ;
    double var_normal ;
};

#endif /*NORMAL_GENERATOR_H_*/
