#include "week4.hpp"

void datePrac() {
    Date ThisYear;
    ThisYear.setYear(2024);
    ThisYear.printYear();

}

void pointPrac() {
    int number = 10;
    // 변수 numver의 르소를 계산하여 p에 저장한다.
    int *p = &number;

    //p가 가리키는 공간에 저정된 값을 출력한다.
    std::cout << *p << std::endl;
    std::cout << p << std:: endl;
}

#include <time.h>

void dynamicPrac() {
    int *ptr;
    srand(time(NULL));
    ptr = new int[10];

    for(int i = 0; i < 10; i++)
        ptr[i] = rand();

    for(int i = 0; i<10; i++)
        std::cout << ptr[i] << " ";
    
    delete[] ptr;
    std::cout << std:: endl;
}

void constructor() {
    Car c1;
    Car c2(100, 5, "red");

}
int main() {
    //datePrac();
    //pointPrac();
    //dynamicPrac();
    constructor();
    return 0;
}