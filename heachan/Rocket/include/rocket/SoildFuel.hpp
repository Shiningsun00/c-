
#ifndef SOILDFUEL_HPP
# define SOILDFUEL_HPP
# include "rocket/Rocket.hpp"

class SolidFuel : public Rocket {
public:
    SolidFuel(void);
    SolidFuel(int y, float theta, int fuel_amount, float ignition_temp, int v);

    void setIgnitionTemp(const float present_t);

private:
    int v;

};

#endif
