#include <iostream>

int lab(int n) {
    return n*n;
}
void practice1(void){
    int n = 0;
    std::cin >> n;
    std::cout << "제곱근 : " << lab(n) <<std::endl;
}

void myPrint(int a) {
    std::cout << "정수 출력 : " << a <<std::endl;
}

void myPrint(double a) {
    std::cout << "실수 출력 : " << a <<std::endl;
}

void myPrint(std::string a) {
    std::cout << "문자 출력 : " << a <<std::endl;
}




int main() { 
    myPrint(10);
    myPrint(10.05);
    myPrint('정수도');
    return 0;
}