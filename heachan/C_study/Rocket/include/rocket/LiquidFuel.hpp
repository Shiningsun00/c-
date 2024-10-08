#ifndef LIQUiDFUEL_HPP
# define LIQUiDFUEL_HPP

#include "rocket/Rocket.hpp"

class LiquidFuel : public Rocket {
public:
    LiquidFuel(void);

    void setIgnitionTemp(const float present_t);
   
private:
    int e;
   
};


#endif