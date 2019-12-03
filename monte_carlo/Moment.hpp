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
    void getMoment(std::ofstream &stream, Random_variable *sample, double order)const;

private:
    /**
     * Check if num is an positive integer.
     * @param num : a number given by the user. This value is first define as a float, but it has to be a
     * positive integer
     * @param type_val : give the value that is checked
     * @return an positive integer if num is a positive integer. Otherwise, the code throw an error
     */
    int getPosInt(double& num, std::string& type_val)const;
    /**
     * getOrder use the function getPosInt
     * @param num : a number given by the user. This value is first define as a float, but it has to be a
     * positive integer
     * @return the value or the error given by getPosInt
     */
    int setOrder(double num) const;


};
#endif /*MOMENT_HPP_*/
