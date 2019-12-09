/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Moment.hpp"

Moment::Moment(Random_variable *sample_,const int order_)
{
    sample = sample_ ;
    order = order_ ;
}

Moment::~Moment()
{
    sample = 0 ;
    order = 0 ;

}

void  Moment::writefile(const char *file_name) const
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
    else {
        auto mean = sample->get_mean();
        auto vector_sample = sample->get_sample();
        outputFile << "order,moment\n";
        for (int i = 1; i <= order; ++i) {
            double sum = 0;
            for (auto vec : vector_sample) {
                sum += pow(vec - mean, i);
            }
            outputFile << i << "," << sum << "\n";
        }
    }
}