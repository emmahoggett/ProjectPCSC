/*
 * Normal.h
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MONTE_CARLO_NORMAL_GENERATOR_H
#define MONTE_CARLO_NORMAL_GENERATOR_H

#include "Uniform.h"

class Normal : public Uniform {
public:

    Normal(const unsigned int N );
    Normal(const unsigned int N , const double mu , const double var);

    // Get function
    std::vector<double> get_sample() { return N_m;}
    virtual double get_mean() { return mean_normal;}
    virtual double get_var() { return var_normal;}

private:
    std::vector<double> N_m ;

    // elles ont le meme nom que dans la classe mere ?
    double mean_normal ;
    double var_normal ;
};

#endif //MONTE_CARLO_NORMAL_GENERATOR_H
