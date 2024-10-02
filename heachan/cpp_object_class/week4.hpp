#ifndef WEEK4_HPP
# define WEEK4_HPP
# include <iostream>
# include <string>
class Car {
    public:
        int getSpeed();
        void setSpeed(int s);
        void honk();

    private:
        int speed;
};


#endif