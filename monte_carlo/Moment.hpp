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
#include "AbstOutput.h"
/**
 *  Compute the statistical moment of different order of a random variable of a given probability distribution.
 *  The mean and variance are the first two statistical moments, and the third and fourth moments also provide
 *  information on the shape of the distribution.
 *  
 * \brief Compute the moment of sample until the order given by the user.
 */
class Moment : public AbstOutput{
public:
    /**
     * \brief Constructor.
     *
     * Set the following variable.
     *
     * @param sample_ : Pointer of Random variable, which gives a sample and the parameter of a
     * distribution.
     * @param order_ : Order of the moment, that is represented by a strictly positive integer.
     */
    Moment(Random_variable *sample_,const int order_);
    /**
     * \brief Default destructor.
     */
    virtual ~Moment();

    /**
     * \brief Compute the moment until the order given by the users.
     *
     * Then return the results into the stream.
     * The moment is computed as the sum over all the sample minus the mean of the distribution powered by the order.
     * @param stream : Output stream of the file. In `main.cpp`, the output stream is defined as `OutputMoment.csv`.
     * @param sample : Pointer of Random variable, which gives a sample and the parameter of a
     * distribution.
     * @param order : A strictly positive integer, that define the number of moment computed.
     */
    virtual void writefile(const char *file_name) const override ;

private:

    Random_variable* sample;
    int order ;

};
#endif /*MOMENT_HPP_*/
