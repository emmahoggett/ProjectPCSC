/*
 * Error.hpp
 *
 *  Created on: Nov 29, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <string>
#include <exception>

/**
 * \brief Manage all the error that the program may encounter
 */
class Error : public std::exception {
private:
    std::string mTag, mProblem;
public:
    /**
     * Constructor of the error
     * @param tagString : give the type of issue
     * @param probString : string returned to the user in case of error
     */
    Error(std::string tagString, std::string probString);

    /**
     * Print the type of error and the error's message
     */
    void PrintDebug() const;
};

#endif /* EXCEPTION_HPP_*/
