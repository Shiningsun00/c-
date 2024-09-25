#include <iostream>

int lab(int n) {
    return n*n;
}

int main(){
    int n = 0;
    std::cin >> n;
    std::cout << "제곱근 : " << lab(n) <<std::endl;
    return 0;
}