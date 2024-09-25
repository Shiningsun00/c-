#include <iostream>

int lab(int n) {
    return n*n;
}
void practice1(void){
    std::cout << "#####prac1 execute#####" << std::endl;
    int n = 0;
    std::cin >> n;
    std::cout << "제곱근 : " << lab(n) <<std::endl;
}

void myPrint(const int a) {
    std::cout << "정수 출력 : " << a <<std::endl;
}

void myPrint(const double a) {
    std::cout << "실수 출력 : " << a <<std::endl;
}

void myPrint(std::string a) {
    std::cout << "문자 출력 : " << a <<std::endl;
}

void prac2(void) {
    std::cout << "#####prac2 execute#####" << std::endl;
    myPrint(10);
    myPrint(10.05);
    myPrint("정수도");
}


int main() { 
    prac2();
    return 0;
}