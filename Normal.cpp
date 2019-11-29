/*
 * Normal.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Normal.h"
#include <iostream>
#include <cmath>
#include <boost/math/special_functions/erf.hpp>
Normal :: Normal(unsigned int N ) :
Uniform(N) ,mean_normal(0.0) , var_normal(1.0)
{
    for (int i = 0; i < N; ++i) {
        N_m.push_back( sqrt(2)*erf(2*U_m[i]) );
    }
}


Normal :: Normal(unsigned int N , double mu , double var):
Uniform(N) ,mean_normal(mu) , var_normal(var)
{
    for (int i = 0; i < N; ++i) {
        N_m.push_back( mu + sqrt(var)*sqrt(2)*erf(2*U_m[i]) );
    }
}
