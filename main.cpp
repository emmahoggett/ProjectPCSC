/*
 * main.cpp
 *
 * Project Monte Carlo :
 *  - Implementation of random number generators with a normal
 *    & uniform probability distribution
 *  - Compute the expectation value of a user defined function
 *  - Build .csv with statistical moments
 *  - Verification of the central limit theorem
 *
 * Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>


#include "AbstExpectation.hpp"
#include "MonteCarloExpectation.hpp"

#include "AbstCentralLimitThm.hpp"
#include "StandardCentralLimitThm.hpp"

#include "Random_variable.h"
#include "Uniform.h"
#include "Normal.h"

#include "Moment.hpp"

#include "Error.hpp"

int getSizeVector(){
    double num;
    std::cout <<"Size of the vector: \t";
    std::cin >> num;
    std::cin.ignore(80, '\n');
    if (num == static_cast<int>(num)){
        int size = static_cast<int>(num);
        if (size <= 0){
            throw (Error("INPUT", "N is unsigned"));
        } else {
            return size;
        }
    } else{
        throw (Error("INPUT", "N is an integer"));
    }
}



int main(int argc, char *argv[]) {

    double mu;
    std::cout << "Mean value is a float number.\n";
    std::cout <<"Enter mean value: \t";
    std::cin >> mu;

    int order;
    std::cout << "Order is an unsigned integer.\n";
    std::cout <<"Enter order: \t";
    std::cin >> order;

    double sigma;
    std::cout << "Variance is a positive float number.\n";
    std::cout <<"Value of variance: \t";
    std::cin >> sigma;

    double alpha;
    std::cout << "Variance is a float value between ]0,1[.\n";
    std::cout <<"Value of alpha: \t";
    std::cin >> alpha;

    double N;
    std::cout << "Size is a positive integer.\n";
    std::cout <<"Size of the normal & uniform vector: \t";
    std::cin >> N;


    Random_variable *pRandom_variable =0;
    AbstCentralLimitThm *pCentralLimit = 0;
    AbstExpectation *pExpectation = 0;
    Moment *pMoment;


    pRandom_variable = new Normal(N, mu, sigma);

    pExpectation = new MonteCarloExpectation;
    double sample_expectation = pExpectation -> getExpectation(pRandom_variable);

    std::ofstream MomentFile("solution_Moment.csv");
    MomentFile.setf(std::ios::scientific);
    MomentFile.setf(std::ios::showpos);
    MomentFile.precision(9);

    if (MomentFile.is_open()) {
        pMoment->getMoment(MomentFile, pRandom_variable, order);
        MomentFile.close();
    } else {
        std::cout << "Couldn't open solution_Moment.csv. Aborting." << std::endl;
        return 1;
    }




    pCentralLimit = new StandardCentralLimitThm;
    pCentralLimit -> getCentralLimitThm(pRandom_variable, sample_expectation,alpha);





}