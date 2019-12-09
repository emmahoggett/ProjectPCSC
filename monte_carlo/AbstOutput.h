//
// Created by pierr on 06/12/2019.
//

#ifndef PROJECTPCSC_ABSTOUTPUT_H
#define PROJECTPCSC_ABSTOUTPUT_H

#include <iostream>
#include "Random_variable.h"

class AbstOutput {
public:
    AbstOutput() {} ;
    virtual ~AbstOutput() {} ;

    virtual void writefile(const char *file_name) const = 0 ;
};
#endif //PROJECTPCSC_ABSTOUTPUT_H
