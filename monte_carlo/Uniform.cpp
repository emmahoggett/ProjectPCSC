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
Uniform :: Uniform(double N) :mean_uniform(0.5) , var_uniform(1.0/12.0)
{
    int size;
    try {
        size = getSizeVector(N);
    }
    catch (Exception& err){
        err.PrintDebug();
        std::cout <<"Vector size N should be an unsigned integer\n";
        std::cout <<"Give alternative unsigned integer \n";
        double N_new;
        std::cin >> N_new;
        Uniform(N_new);

    }
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(0.0, 1.0);
    for (int n = 0; n < size; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a
        // double in [0, 1). Each call to dis(gen) generates a new random double
        U_m.push_back(dis(gen));
    }
}

Uniform :: Uniform(double N, double a , double b ) : mean_uniform((a+b)/2.0) , var_uniform(pow(a+b,2)/12.0)
{
    int size;
    try {
        size = getSizeVector(N);
    }
    catch (Exception& err){
        err.PrintDebug();
        std::cout <<"Vector size N should be an unsigned integer\n";
        std::cout <<"Give alternative unsigned integer \n";
        double N_new;
        std::cin >> N_new;
        Uniform(N_new,a,b);

    }
    if (b < a){
        double temp = b;
        b = a;
        a = temp;
    }
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(a, b);
    for (int n = 0; n < size; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a
        // double in [0, 1). Each call to dis(gen) generates a new random double
        U_m.push_back(dis(gen));
    }

}

int Uniform::getPosInt(double &num, std::string &type_val) {
    if (num == static_cast<int>(num)){
        int size = static_cast<int>(num);
        if (size <= 0){
            throw (Exception("INPUT", type_val + "is unsigned"));
        } else {
            return size;
        }
    } else{
        throw (Exception("INPUT",type_val +" is an integer"));
    }
}

int Uniform::getSizeVector(double N) {
    std::string variable = "Size of the vector";
    return getPosInt(N,variable);
}
