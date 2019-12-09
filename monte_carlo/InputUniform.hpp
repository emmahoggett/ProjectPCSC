/*
 * InputUniform.Hpp
 *
 *  Created on: Dec 09, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef INPUTUNIFORM_HPP_
#define INPUTUNIFORM_HPP_

#include "AbstInput.hpp"
#include "Uniform.h"
#include "Random_variable.h"

#include <iostream>
#include <fstream>
#include <string>

/**
 * Class that treat uniform distribution input file. This class is a child of AbstInput.
 * \brief Manage uniform input parameters.
  */

class InputUniform:public AbstInput{

public:
    /**
     * \brief Default constructor.
     */
    InputUniform();
    /**
     * \brief Default destructor.
     */
    virtual ~InputUniform();

    /**
     * \brief Read file for uniform distribution random variable pointer.
     *  Each properties of variables are checked in the reading process.
     * @param pRandomVar : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution. It will be define as a Uniform variable.
     * @param alpha : The confidence interval that can be precised in the file. Otherwise, it is set to
     * default: alpha = 0.05.
     * @param moment : Order of the moment that can be precised in the file. Otherwise, it is set to
     * default: moment = 4.
     * @param file_name : File name given by the user or that was set as default: DefaultNormal.dat. The input need
     * to be organise as following: Size of the vector for the distribution, mean, variance, confidence interval and
     * order of the moment. The two last parameter are not needed if the user want to set them as default.
     * - Size of the vector: a strictly positive integer.
     * - Lower bound : a float number.
     * - Upper bound : a float number, that is strictly greater than the lower bound.
     * - Confidence interval : a float number in ]0,1[.
     * - Order: a strictly positive integer.
     */
    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment, const char *file_name) override ;

};

#endif /*INPUTUNIFORM_HPP_*/
