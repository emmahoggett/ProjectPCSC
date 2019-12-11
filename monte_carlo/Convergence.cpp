/*
 * Convergence.cpp
 *
 *  Created on: Dec 06, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Convergence.h"
#include <iostream>
#include <fstream>
#include "Error.hpp"
#include "StandardCentralLimitThm.hpp"

Convergence :: Convergence(AbstCentralLimitThm* centralLimit_ , AbstExpectation* expectation_ , Random_variable* sample_, const double alpha_):
alpha(alpha_)
{
    centralLimit = centralLimit_ ;
    expectation = expectation_ ;
    sample = sample_ ;
}

Convergence:: ~Convergence()
{
    centralLimit = 0 ;
    expectation = 0 ;
    sample = 0 ;
}

void Convergence:: writefile( const char *file_name) const
{
    std::ofstream outputFile;
    outputFile.open(file_name);
    outputFile.setf(std::ios::scientific);
    outputFile.setf(std::ios::showpos);
    outputFile.precision(5);

    if (!outputFile.is_open())
    {
        throw Error("FILE", "File can't be opened");
    }
    else{
        if(expectation->isFunctionLin()){
            outputFile << "Index,LowerBound,UpperBound,mcmean,truemean\n";}
        else{
            outputFile << "Index,LowerBound,UpperBound,mcmean\n";
        }

        for (int i = 1; i <= sample->get_size() ; ++i)
        {

            Random_variable* sub_sample_;
            sub_sample_ = sample->sub_sample(i);
            auto mean_mc = expectation->calculate_expectation(sub_sample_) ;
            centralLimit->calculate_CentralLimitThm(sub_sample_, expectation , alpha) ;
            auto bound = centralLimit->get_interval();


            if (expectation->isFunctionLin()){
                auto mean = sample->get_mean();
                outputFile<< i<<","<< bound[0] <<","<< bound[1]<<","<<mean_mc<<","<<mean<<"\n";

            }else{
                outputFile<< i<<","<< bound[0] <<","<< bound[1]<<","<<mean_mc<<"\n";
            }



            delete sub_sample_;
        }
    }
    outputFile.close();

}