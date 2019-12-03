/*
 * Normal.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Normal.h"
#include <iostream>
#include <vector>
#include <cmath>
#include "boost/math/distributions/normal.hpp"

Normal :: Normal( const int N) :
Uniform(N) ,mean_normal(0.0) , var_normal(1.0)
{
    boost::math::normal dist(0.0,1.0) ;
    for (int i = 0; i < N; ++i) {
        N_m.push_back( quantile(dist,U_m[i]) );
    }
}


Normal :: Normal(const int N, const double mu , const double var):
Uniform(N) ,mean_normal(mu), var_normal(var)
{

    boost::math::normal dist(mean_normal,var_normal) ;
    for (int i = 0; i < N; ++i) {
        N_m.push_back( quantile(dist,U_m[i]) );
    }
}


