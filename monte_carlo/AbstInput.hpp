/*
 * AbstInput.hpp
 *
 *  Created on: Dec 02, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef ABSTINPUT_HPP_
#define ABSTINPUT_HPP_

#include <iostream>
#include <string>
#include "Error.hpp"
#include "Random_variable.h"

/** An abstract class in case if the user need to have a different type of input.
 * For example, if he wants to make an uniform distribution.
 * \brief Abstract class for input
 */
class AbstInput{

public:

    /**
     * \brief Default constructor.
     */
    AbstInput();

    /**
     * \brief Default destructor.
     */
    virtual ~AbstInput();

    /**
     * \brief Abstract function that read the file.
     *
     * The function can have a Random_Variable, which give to the
     * user the opportunity to build different type of vector distribution.
     * @param pRandomVar : Pointer of Random variable, which contains a sample and parameters of a distribution.
     * @param alpha : Define the probability 1-alpha that the true mean is in the confidence interval that can be
     * precised in the file or set as default in the children of the class.
     * @param moment : Order of the moment that can be precised in the file or set as default in the children of
     * the class.
     * @param file_name : File name given by the user or that was set as default.
     */
    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment, const char *file_name) = 0;

};

#endif /*ABSTINPUT_HPP_*/
