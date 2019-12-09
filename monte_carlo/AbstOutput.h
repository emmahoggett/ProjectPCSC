/*
 * AbstOutput.h
 *
 *  Created on: Dec 06, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef ABSTOUTPUT_H_
#define ABSTOUTPUT_H_

#include <iostream>
#include "Random_variable.h"
/**
 * \brief Abstract class for output file.
 *
 * Parent of Convergence and Moment.
 */
class AbstOutput {
public:
    /**
     * \brief Default constructor.
     */
    AbstOutput() {} ;
    /**
     * \brief Default destructor.
     */
    virtual ~AbstOutput() {} ;

    /**
     * \brief Abstract method that return a file.
     * @param file_name : name of the returned file.
     */

    virtual void writefile(const char *file_name) const = 0 ;
};
#endif /*ABSTOUTPUT_H_*/
