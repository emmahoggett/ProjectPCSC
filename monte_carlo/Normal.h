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
    // Constructor and destructor
    Normal();
    Normal(double mu);

    // Get function
    virtual std::vector<double> get_sample() { return N_m;}
    virtual double get_mean() { return mean_normal;}
    virtual double get_var() { return var_normal;}

    virtual double getPosDouble(double& num, std::string& type_val)const;
    double getVariance();

private:
    std::vector<double> N_m ;
    double mean_normal ;
    double var_normal ;
};

#endif /*NORMAL_GENERATOR_H_*/
