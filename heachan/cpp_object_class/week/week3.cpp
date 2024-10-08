#include <iostream>
#include <string>

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

int* makeDefaultFunc(int i) { 
    int beta_array[i];
    for(int n= 0; n<i; i++) {
        beta_array[n] = 0; 
    }
    static const int& default_array = beta_array;
    return ;
}
int sumVer2(const int* a = nullptr, int i) {
    
    const int* using_array = ( a == nullptr ) ? default_array : a;
    return using_array[0] +using_array[1] + using_array[2] +using_array[3];
}

void prac3_1(void) { 
    std::cout << "#####prac3 execute#####" << std::endl;
    std::cout << "sumVer1(10, 15)         = " << sumVer1(10, 15)         << std::endl;     
    std::cout << "sumVer1(10, 15, 25)     = " << sumVer1(10, 15, 25)     << std::endl;     
    std::cout << "sumVer1(10, 15, 25, 30) = " << sumVer1(10, 15, 25, 30) << std::endl;     
    std::cout << "sumVer2(10, 15)         = " << sumVer1(10, 15)         << std::endl;     
    std::cout << "sumVer2(10, 15, 25)     = " << sumVer1(10, 15, 25)     << std::endl;     
    std::cout << "sumVer2(10, 15, 25, 30) = " << sumVer1(10, 15, 25, 30) << std::endl;     
}
void prac3_2(void) { 
    int i;
    std::cout << "더할 정수의 개수를 입력 : " << std::endl;
    std::cin >> i;
    int array[i];
    for(int n=0; n<i; n++) {
        std::cout << "더할 정수를 입력하시오 : ";
        std::cin >> array[n];

    }

}


void prac4(void){ 
    std::cout << "#####prac4 execute#####" << std::endl;
    std::string sentance = "When in Rome, do as the Romans.";
    std::cout<< sentance.find("Rome") <<std::endl;   //"" 말고 ''쓰면 오류남  ''는 단일 문자용 타입이므로 각가의 문자를 생각해 인덱스 2에 있는 e 를 인식함
}

int main() { 
    prac3();
    return 0;
}