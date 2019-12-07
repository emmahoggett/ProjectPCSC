/*
 * main.cpp
 *
 * Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

/*! \mainpage Monte Carlo Algorithm
 * \section introduction Introduction
 *This project is a familiarization of C++ use. The aim of this project is to create a Monte Carlo Algorithm as
 * modular as possible. The following goals through this project have been reached:
 *  - Implementation of random number generators with a normal
 *    & uniform probability distribution
 *  - Compute the expectation value of a user defined function
 *  - Build .csv with statistical moments
 *  - Verification of the central limit theorem
 *
 *
 * \section sec1 Structure of the code
 *
 * \subsection subsec11 Input function
 * - AbstInput
 * - InputNormal
 *
 * \subsection subsec12 Random number generators with a normal & uniform probability distribution
 * - Random_variable
 * - Uniform
 * - Normal
 *
 * \subsection subsec13 Expectation
 * - AbstExpectation
 * - MonteCarloExpectation
 *
 *\subsection subsec14 Statistical moment
 * - Moment
 *
 * \subsection subsec15 Central Limit Theorem
 * - AbstCentralLimitThm
 * - StandardCentralLimitThm
 *
 * \section info Various informations
 * \subsection info1 Project Status
 *  The project was submitted on the 13 December 2019, as part of the Programming
 *  Concepts in Scientific Computing course.
 *
 * \subsection info2 Authors
 * 	- Hoggett Emma <\emma.hoggett@epfl.ch>
 * 	- Vuillecard Pierre <\pierre.vuillecard@epfl.ch>
 *
 *
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>


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
    if (argc > 2) {
        std::cerr << "Missing arguments. Please run the exercise as:\n"
                  << "       ./monte_carlo_run\n"
                  << "       ./monte_carlo_run <filename>.dat"
                  << std::endl;
        return 1;
    }
    const char *file_name_A;

    if(argc==2){
        file_name_A = argv[1];
    }else {
        std::cout << "The file is set as default: DefaultNormal.dat";
        file_name_A = "DefaultNormal.dat";
    }

    double alpha;
    int order;
    Random_variable *pRandom_variable =0;
    AbstCentralLimitThm *pCentralLimit = 0;
    AbstExpectation *pExpectation = 0;
    Moment *pMoment = 0;
    AbstInput *pInput = 0;

    pInput = new InputNormal;
    try{
        pInput ->read(pRandom_variable,alpha,order, file_name_A);
    } catch(Error& e){
        e.PrintDebug();
        return -1;
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
        std::cerr << "Couldn't open OutputMoment.csv. Aborting." << std::endl;
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
        std::cerr << "Couldn't open OutputConvCTL.csv. Aborting." << std::endl;
        return 1;
    }


}