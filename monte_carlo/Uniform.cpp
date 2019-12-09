/*
 * Uniform.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Uniform.h"
#include <random>
#include <iostream>
#include <cmath>

// Constructor
Uniform :: Uniform(const int N) :mean_uniform(0.5) , var_uniform(1.0/12.0)
{
    try {
        set_size(N);
    }
    catch (Error& err){
        err.PrintDebug();
        std::cout <<"Give alternative size \n";
        double N_new;
        std::cin >> N_new;
        set_size(N_new);
    }
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(0.0, 1.0);
    for (int n = 0; n < N; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a
        // double in [0, 1). Each call to dis(gen) generates a new random double
        U_m.push_back(dis(gen));
    }
    m_size = N;
}

Uniform :: Uniform(const int N, const double a , const double b ) : mean_uniform((a+b)/2.0) , var_uniform(pow(a+b,2)/12.0)
{
    try {
        set_size(N);
    }
    catch (Error& err){
        err.PrintDebug();
        std::cout <<"Give alternative size \n";
        double N_new;
        std::cin >> N_new;
        set_size(N_new);
    }
    try {
        set_interval(a,b);
    }
    catch (Error& err){
        err.PrintDebug();
        std::cout <<"Give alternative interval, the lower bound : \n";
        double new_a;
        std::cin >> new_a;
        double new_b;
        std::cin >> new_b;
        set_interval(new_a, new_b);
    }
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(m_a, m_b);
    for (int n = 0; n < m_size; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a
        // double in [0, 1). Each call to dis(gen) generates a new random double
        U_m.push_back(dis(gen));
    }
}
Uniform :: Uniform( Uniform* sample):
mean_uniform(sample->get_mean()) , var_uniform(sample->get_var())
{
    U_m = sample->get_sample() ;
}



void Uniform::set_interval(const double a, const double b)
{
    if(b<a)
    {
        throw Error("INPUT", "The upper bound can't be less than the lower bound ");
    }
    else if(a==b)
    {
        throw Error("INPUT", "The lower bound can't be equal to the upper bound ");
    }
    else
    {
        m_a = a;
        m_b = b;
    }

}

void Uniform::set_size(const int N)
{
    if(N<0)
    {
        throw Error("INPUT", "The size must be positive");
    } else{
        m_size = N;
    }
}

Random_variable* Uniform::sub_sample( const int N )
{
    if( N> U_m.size())
    {
        throw Error("VARIABLE"," N must be bigger than the size of the sample ") ;
    } else
    {
        Random_variable* p_rvs(0);
        std::vector<double> memory ;
        int size = U_m.size() ;
        for (int i = size-1; i >= N  ; i--) {
            memory.push_back(U_m[i]);
            U_m.pop_back();
        }
        p_rvs = new Uniform( this) ;
        for (int i = memory.size()-1; i >= 0  ; i--) {

            U_m.push_back(memory[i]);
        }
        return p_rvs ;
    }

}
