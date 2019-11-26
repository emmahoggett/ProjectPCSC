/*
 * FileManagement.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#include "FileManagement.hpp"

FileManagement::FileManagement() {}

FileManagement::~FileManagement() {}

std::ofstream FileManagement::createFile(std::string name) {
    std::ofstream write_file (name);
    if (!write_file.is_open()) {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }

    write_file.setf(std::ios::scientific);
    write_file.setf(std::ios::showpos);
    write_file.precision(9);

    return write_file;
}