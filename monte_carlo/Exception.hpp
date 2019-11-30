/*
 * Exception.hpp
 *
 *  Created on: Nov 29, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <string>

class Exception {
private:
    std::string mTag, mProblem;
public:
    Exception(std::string tagString, std::string probString);
    void PrintDebug() const;
};

#endif /* EXCEPTION_HPP_*/
