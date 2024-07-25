#ifndef PRACTICE_CLASS_HPP
# define PRACTICE_CLASS_HPP
#include <iostream>

/* Rpm.cpp */

const float R_W_CONVERTER = 1; 

class Rpm {
public:
    Rpm(float rev);
    Rpm(void);
    float   getRev(void);               // method va. funtion
    // const float   getRev(void);
    void    setRev(float rev);
    // void    setRev(const float rev);

private:
    float   rev;
};

#endif