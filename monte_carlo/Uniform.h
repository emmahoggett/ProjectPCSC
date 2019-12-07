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
 * Uniform class is a derived class from the abstract class Random_variable .
 * The package Boost allows the construction of a sample that comes from a uniform distribution.
 * Parent of Normal and child of Random_variable.
 */
/**
 * \brief Create a random variable from a uniform distribution .
 */
class Uniform : public Random_variable {

public:

    // Constructor definition
    /**
     * Constructor : compute a sample from a uniform U(0,1)
     * @param N : size of the sample
     */
    Uniform(const int N) ;
    /**
     * Constructor : compute a sample from a uniform U(a,b)
     * @param N : size of the sample
     * @param a : lower bound of the uniform interval
     * @param b : upper bound of the uniform interval
     */
    Uniform(const int N, const double a , const double b );

    // Get function
    /**
     * \brief return the sample of the random variable
     * @return
     */
    virtual std::vector<double> get_sample() const { return U_m;}
    /**
     * \brief return the mean of the uniform distribution
     * @return
     */
    virtual double get_mean() const { return mean_uniform;}
    /**
     * \brief return the variance of the uniform distribution
     * @return
     */
    virtual double get_var() const { return var_uniform;}
    /**
     * \brief return the size of the sample
     * @return
     */
    virtual int get_size() const {return m_size ;}


private:

    double mean_uniform ;
    double var_uniform ;
    int m_size ;
    double m_a;
    double m_b;
    void set_size(const int N) ;
    void set_interval(const double a, const double b) ;

protected:
    std::vector<double> U_m ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
