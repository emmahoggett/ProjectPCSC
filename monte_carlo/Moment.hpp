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

using namespace std;
/**
 * Compute the moment of sample until the order given by the user.
 * The result is then put into an output stream
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
     * Compute the moment until the order given by the users.
     * Then return the results into the stream and then close the stream
     * @param stream : out stream, should be define by the user first
     * @param sample : random_variable data type defined by the user, contain a vector,
     * the mean and the variance of the vector
     * @param order : a positive integer
     */
    void getMoment(std::ofstream &stream, Random_variable *sample, int order)const;



};
#endif /*MOMENT_HPP_*/
