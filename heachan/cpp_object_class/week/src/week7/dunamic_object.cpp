#include <iostream>
#include <string>
using namespace std;

class Car {
    int speef;
    int gear;
    std::string color;
public:
    Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) { 
    }
    void display();
};

void Car::display(void) { 
    cout << "속도: " << speed << " 기어: " << gear << "색상 : " << color << endl;

}

void prac1(void) { 
    cout << "#########Prac1#########"
    Car myCar;
    myCar.display();
    Car* pCar = &myCar;
    pCar->display();
    pCar->display();
    pCar = new Car(0, 1, "blue")
    pCar-> display();
}

int main { 
    prac1();
    return 0;
}