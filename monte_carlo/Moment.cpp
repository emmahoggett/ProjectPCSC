/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Moment.hpp"

Moment::Moment() {}

Moment::~Moment() {}

void Moment::getMoment(std::ofstream &stream, const Random_variable *sample, const int order) const {
    auto mean = sample -> get_mean();
    auto vector_sample = sample-> get_sample();
    stream << "order,moment\n";
    for (int i = 1; i <= order; ++i) {
        double sum = 0;
        for(auto vec : vector_sample)
        {
            sum+=pow(vec-mean, i);
        }
        stream << i <<","<< sum << "\n";
    }

}

