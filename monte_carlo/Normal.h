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
     * Constructor of the class Normal
     * @param N : integer entered
     */
    Normal( const int N);
    Normal(const int N , const double mu , const double var);


    virtual std::vector<double> get_sample() const { return N_m;}
    virtual double get_mean() const { return mean_normal;}
    virtual double get_var() const { return var_normal;}




private:

    void set_var(const double var);

    std::vector<double> N_m ;
    double mean_normal ;
    double var_normal ;
};

#endif /*NORMAL_GENERATOR_H_*/
