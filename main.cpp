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

#include "AbstInput.hpp"
#include "InputNormal.hpp"

#include "Random_variable.h"
#include "Uniform.h"
#include "Normal.h"

#include "Moment.hpp"

#include "Error.hpp"



int main(int argc, char *argv[]) {


    double alpha;
    int order;
    Random_variable *pRandom_variable =0;
    AbstCentralLimitThm *pCentralLimit = 0;
    AbstExpectation *pExpectation = 0;
    Moment *pMoment;
    AbstInput *pInput = 0;

    pInput = new InputNormal;
    try{
        pInput ->read(pRandom_variable,alpha,order);
    } catch(Error& e){
        e.PrintDebug();
        std::cout << "Enter a new file name :\t";
        char *file_name;
        std::cin >> file_name;
        pInput->read(pRandom_variable,alpha,order, file_name);
    }


    pExpectation = new MonteCarloExpectation;
    double sample_expectation = pExpectation -> calculate_expectation(pRandom_variable);

    std::ofstream MomentFile("OutputMoment.csv");
    MomentFile.setf(std::ios::scientific);
    MomentFile.setf(std::ios::showpos);
    MomentFile.precision(9);

    if (MomentFile.is_open()) {
        pMoment->getMoment(MomentFile, pRandom_variable, order);
        MomentFile.close();
    } else {
        std::cout << "Couldn't open OutputMoment.csv. Aborting." << std::endl;
        return 1;
    }




    pCentralLimit = new StandardCentralLimitThm;
    pCentralLimit -> calculate_CentralLimitThm(pRandom_variable, sample_expectation,alpha);

    std::ofstream CTLFile("OutputConvCTL.csv");
    CTLFile.setf(std::ios::scientific);
    CTLFile.setf(std::ios::showpos);
    CTLFile.precision(9);

    double sigma;
    if (CTLFile.is_open()) {
        sigma = pRandom_variable ->get_var();
        sigma = sqrt(sigma);
        CTLFile << "sigma,alpha\n";
        CTLFile << sigma << "," << alpha;
        CTLFile.close();
    } else {
        std::cout << "Couldn't open OutputConvCTL.csv. Aborting." << std::endl;
        return 1;
    }





}