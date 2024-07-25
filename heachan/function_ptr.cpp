#include<iostream>
#include<stdio.h>

int sum(const int a, const int b) {
    return a + b;
}

static int _sum(const int a, const int b) {
    return a + b;
}

int main(void) {
    int (*func)(const int a, const int b) = sum;
    int (*_func)(const int a, const int b) = _sum;

    std::cout << (*func)(1,4) <<std::endl;
    std::cout << func(1,4) <<std::endl;
    // std::cout << &sum(1,4) <<std::endl;
    std::cout << sum(1,4) <<std::endl;

    printf(" _sum  : %d\n", sum);         //2       //1
    printf("&_sum  : %d\n", &sum);        //3       //1
    printf(" func  : %d\n", func);         //1      //1

    printf("&func  : %d\n", &func);        //1      //2

    printf(" _sum  : %p\n", _sum);        //1       //3
    printf("&_sum  : %p\n", &_sum);       //1       //3
    printf(" _func  : %p\n", _func);         //1    //3

    printf("&_func  : %p\n", &_func);        //1    //4
 
    return 0;

}
// 2147483647 + 1 = -2147483648

// 01111...111
//  1000...000
// 10000...000 => -2147483648  - 0
// 11111...111 => -2147483648  - 2147483647