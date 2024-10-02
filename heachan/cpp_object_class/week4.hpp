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


class Date {
    public:
        Date(); 
        void printYear();
        int getYear();
        void setYear(int year);

    private:
        int year;
     
};

#endif