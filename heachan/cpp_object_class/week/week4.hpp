#ifndef WEEK4_HPP
# define WEEK4_HPP
# include <iostream>
# include <string>
class Car {
    private:
        int speed;
        int gear;
        std::string color;

    public:
        Car();
        Car(int s, int g,  std::string c);
        int getSpeed();
        void setSpeed(int s);
        void honk();
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