//
// Created by pierr on 06/12/2019.
//

#ifndef PROJECTPCSC_ABSTOUTPUT_H
#define PROJECTPCSC_ABSTOUTPUT_H

class AbstOutput {
public:
    AbstOutput() ;
    virtual ~AbstOutput() ;
    virtual void writefile( std::ostream&) = 0 ;
};
#endif //PROJECTPCSC_ABSTOUTPUT_H
