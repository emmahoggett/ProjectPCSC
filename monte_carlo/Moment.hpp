/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MOMENT_HPP_
#define MOMENT_HPP_

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"
/**
 *  Compute the statistical moment of different order of a random variable of a given probability distribution. The result is output in a stream that the user has precised
 *  The mean and variance are the first two statistical moments, and the third and fourth moments also provide information on the shape of the distribution.
 */

/**
 * \brief Compute the moment of sample until the order given by the user.
 */
class Moment{
public:
    /**
     * Constructor of the class Moment
     */
    Moment();
    /**
     * Destructor of the class Moment
     */
    virtual ~Moment();

    /**
     * \brief Compute the moment until the order given by the users.Then return the results into the stream
     *
     * the moment is computed as : the sum over all the sample minus the mean of the distribution powered by the order
     * @param stream : out stream, should be define by the user first
     * @param sample : random_variable data type defined by the user, contain a vector,
     * the mean and the variance of the vector
     * @param order : a positive integer
     */
    void getMoment(std::ofstream &stream, const Random_variable *sample,const int order)const;


};
#endif /*MOMENT_HPP_*/
