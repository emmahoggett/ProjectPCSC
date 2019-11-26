/*
 * FileManagement.hpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef FILEMANAGEMENT_HPP_
#define FILEMANAGEMENT_HPP_

#include <fstream>
#include <string>
#include <iostream>
class FileManagement{
public:
    FileManagement();
    virtual ~FileManagement();

    std::ofstream createFile(std::string name);
};

#endif /*FILEMANAGEMENT_HPP_*/
