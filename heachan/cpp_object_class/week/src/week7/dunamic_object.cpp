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
    Car myCar;                             // 정적 메모리 할당으로 객체 생성
    myCar.display();
    Car* pCar = &myCar;                    // 객체 포인터로 동일한 객체를 가리키게 함
    pCar->display();
    pCar = new Car(0, 1, "blue")           // 동적 메모리 할당으로 새로운 객체 생성
    pCar-> display();
}

int main { 
    prac1();
    return 0;
}