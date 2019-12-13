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
    boost::math::normal dist(mean_normal,var_normal) ;
    for (int i = 0; i < N; ++i) {
        N_m.push_back( quantile(dist,U_m[i]) );
    }
}


Normal :: Normal(const int N, const double mu , const double var):
Uniform(N) ,mean_normal(mu)
{
    try {
        set_var(var);
    }
    catch (Error& err){
        err.PrintDebug();
        std::cout <<"Give alternative positive variance :\n";
        double new_var ;
        std::cin>>new_var;
        set_var(new_var);
    }

    boost::math::normal dist(mean_normal,var_normal) ;
    for (int i = 0; i < N; ++i) {
        N_m.push_back( quantile(dist,U_m[i]) );
    }
}
Normal ::Normal( Normal* sample_) :
mean_normal(sample_->get_mean()) , var_normal(sample_->get_var())
{
    N_m = sample_->get_sample() ;
}

void Normal::set_var(const double var)
{
    if(var<0)
    {
        throw Error("INPUT", "variance must be positive");
    } else
    {
        var_normal = var ;
    }
}
Random_variable* Normal::sub_sample( const int N )
{
    if( N> N_m.size())
    {
        throw Error("VARIABLE"," N must be lower than the size of the sample ") ;
    } else
    {
        Random_variable* p_rvs(0);
        std::vector<double> memory ;
        int size = N_m.size() ;
        for (int i = size-1; i >= N  ; i--) {
            memory.push_back(N_m[i]);
            N_m.pop_back();
        }
        p_rvs = new Normal( this) ;
        for (int i = memory.size()-1; i >= 0  ; i--) {

            N_m.push_back(memory[i]);
        }
        return p_rvs ;
    }

}