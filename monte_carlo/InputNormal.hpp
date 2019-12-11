/*
 * InputNormal.hpp
 *
 *  Created on: Dec 02, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef INPUTNORMAL_HPP_
#define INPUTNORMAL_HPP_

#include "AbstInput.hpp"
#include "Normal.h"
#include "Random_variable.h"

#include <iostream>
#include <fstream>
#include <string>
/**
 * Class that treat uniform and normal distribution input file. This class is a child of AbstInput.
 * \brief Manage normal and uniform input parameters.
  */

class InputNormal:public AbstInput{

public:
    /**
     * \brief Default constructor.
     */
    InputNormal();
    /**
     * \brief Default destructor.
     */
    virtual ~InputNormal();

    /**
     * \brief Read file for uniform and normal distribution random variable pointer.
     *
     *  Each properties of variables are checked in the reading process.
     * @param pRandomVar : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution. It will be define as a Normal variable.
     * @param alpha : The confidence interval that can be precised in the file. Otherwise, it is set to
     * default: alpha = 0.05.
     * @param moment : Order of the moment that can be precised in the file. Otherwise, it is set to
     * default: moment = 4.
     * @param file_name : File name given by the user or that was set as default: `DefaultNormal.dat`. The two last
     * parameter are not needed if the user want to set them as default.
     *
     * The input need to be organise as following:
     * - Size of the vector: a strictly positive integer.
     * - Mean : a float number.
     * - Variance : a strictly positive float number.
     * - Confidence interval : a float number in ]0,1[.
     * - Order: a strictly positive integer.
     */
    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment, const char *file_name) override ;

};

#endif /*INPUTNORMAL_HPP_*/
