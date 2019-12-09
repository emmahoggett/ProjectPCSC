/*
 * Uniform.h
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */
#ifndef MONTE_CARLO_UNIFORM_GENERATOR_H
#define MONTE_CARLO_UNIFORM_GENERATOR_H

#include "Random_variable.h"
#include "Error.hpp"
#include <iostream>
/**
 * Uniform class is a derived class from the abstract class Random_variable and the parent
 * of Normal class.
 *
 * The package Boost allows the construction of a sample that comes from a uniform distribution.
 */
/**
 * \brief Create a random variable from a uniform distribution .
 */
class Uniform : public Random_variable {

public:

    /**
     * \brief Default constructor.
     */
    Uniform();
    /**
     * \brief Constructor : compute a sample from a uniform U(0,1).
     * @param N : Positive integer that define the size of the vector.
     */
    Uniform(const int N) ;
    /**
     * \brief Constructor : compute a sample from a uniform U(a,b).
     * @param N : Positive integer that define the size of the vector.
     * @param a : Lower bound of the uniform interval, which represent a float number.
     * @param b : Upper bound of the uniform interval, which represent a float number strictly
     * greater than a.
     */
    Uniform(const int N, const double a , const double b );
    /**
     *\brief Make a copy of the Uniform variable.
     * @param sample_ : Pointer of Uniform variable, which gives a vector and the
     * parameter of the vectors distribution.
     */
    Uniform( Uniform* sample);

    /**
     * \brief Return the sample of the random variable.
     * @return The vector with an uniform distribution.
     */
    virtual std::vector<double> get_sample() const { return U_m;}
    /**
     * \brief Return the mean of the uniform distribution.
     * @return The mean.
     */
    virtual double get_mean() const { return mean_uniform;}
    /**
     * \brief Return the variance of the uniform distribution.
     * @return The variance.
     */
    virtual double get_var() const { return var_uniform;}
    /**
     * \brief Return the size of the sample.
     * @return The size of the vector.
     */
    virtual int get_size() const {return U_m.size();}

    /**
     * \brief Return the N first value of the normal and uniform vector.
     * @param N : Size of the output vector, which is a strictly positive integer and lower then
     * the size of the uniform vector.
     * @return A Random_variable pointer with the N first value of the uniform vector. The
     * pointer contains the same variance and mean as the uniform pointer.
     */
    virtual Random_variable* sub_sample( const int N ) ;

private:

    double mean_uniform ;
    double var_uniform ;
    int m_size ;
    double m_a;
    double m_b;
    void set_size(const int N) ;
    void set_interval(const double a, const double b) ;

protected:
    /**
     * \brief Vector computed for the uniform distribution.
     */
    std::vector<double> U_m ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
