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
// overloading
void prac2(void) {  
    std::cout << "#####prac2 execute#####" << std::endl;
    myPrint(10);
    myPrint(10.05);
    myPrint("정수도");
}

int sumVer1(const int a = 0, const int b = 0, const int c = 0, const int d = 0) {
    return a+b+c+d;
}
int sumVer2(const int* a = nullptr) {
    static int default_array[4] = {0, 0, 0, 0};
    return a[0] +a[1] + a[2] +a[3];
}

void prac3(void){ 
    std::cout << "#####prac3 execute#####" << std::endl;
    std::cout << "sumVer1(10, 15)         = " << sumVer1(10, 15)        << std::endl;     
    std::cout << "sumVer1(10, 15, 25)     = " << sumVer1(10, 15, 25)    << std::endl;     
    std::cout << "sumVer1(10, 15, 25, 30) = " << sumVer1(10, 15, 25, 30) << std::endl;     
}


int main() { 
    prac3();
    return 0;
}