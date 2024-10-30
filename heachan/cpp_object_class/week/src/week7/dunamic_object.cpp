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
    cout << "#########Prac1#########" << endl;
    Car myCar;                             // 정적 메모리 할당으로 객체 생성
    myCar.display();
    Car* pCar = &myCar;                    // 객체 포인터로 동일한 객체를 가리키게 함
    pCar->display();
    pCar = new Car(0, 1, "blue")           // 동적 메모리 할당으로 새로운 객체 생성
    pCar-> display();
}
void swapObjects(Car c1, Car c2) { 
    Car tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
    c1.display();
    c2.display();
}

void prac2(){ 
    cout << "#########Prac3#########" << endl;
    Car mine(0, 1, "white");
    Car yours(0, 1, "red");
    swapObjects(mine, yours);
    // 바뀌었을까? 안바뀌었을까? --> 안바뀜
    mine.display();
    yours.display();
}

void swapObjectsPrt(Car c1, Car c2) { 
    cout << "함수를 포인터로 만들 때" << endl;
    Car tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    p1->display();
    p2->display();
}
void prac3(){ 
    cout << "#########Prac3#########" << endl;
    Car mine(0, 1, "white");
    Car yours(0, 1, "red");
    swapObjects(&mine, &yours);
    // 바뀌었을까? 안바뀌었을까? --> 볌함
    mine.display();
    yours.display();
}

void swapObjects(Car &c1, Car &c2) { 
    cout << "함수를 참조자로 받을 때" << endl;
    Car tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
    c1.display();
    c2.display();
}

void prac3(){ 
    cout << "#########Prac3#########" << endl;
    Car mine(0, 1, "white");
    Car yours(0, 1, "red");
    swapObjects(mine, yours);
    // 바뀌었을까? 안바뀌었을까? --> 볌함
    mine.display();
    yours.display();
}

int main { 
    prac1();
    return 0;
}