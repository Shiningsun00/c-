#include <iostream>
// #include <windows.h> //exam2 용 이건 visual에서 돌려야함
// #include <conio.h>
using namespace std;
class Circle
{
    public:
    int x, y;
    int radius;
    Circle() : x{ 0 }, y{ 0 }, radius{ 0 } { } // 기본생성자
    Circle(int x, int y, int r) : x{ x }, y{ y }, radius{ r } { }
        void print() {
        cout << "반지름: " << radius << " @(" << x << ", " << y
        <<")" << endl;
    }
    // void draw() //exam2 용 이건 visual에서 돌려야함
    // {
    //     int r = radius/2; // 윈도우 GDI 기능을 이용하여 원을 그림
    //     HDC hdc = GetWindowDC(GetForegroundWindow());
    //     Ellipse(hdc, x-r, y-r, x+r, y+r);
    // }
};
void defineLikeThis() {
    Circle objArray[10] = { // 각 배열 요소별 생성자 호출
        Circle(100, 100, 30),
        Circle(100, 200, 50),
        Circle(100, 300, 80)
    };

    for (Circle c: objArray)
       c.print();
}


void example1() { 
        Circle objArray[10]; // 객체 배열 정의.. 기본 생성자 호출
    for (Circle& c: objArray) { // 범위 기반 for 루프
        c.x = rand()%500;
        c.y = rand()%300;
        c.radius = rand()%100;
        for (Circle c: objArray)
            c.print();
    }
}
// void example2() { 
//     Circle objArray[10]; // 객체배열 선언
//     while(true){
//         for (Circle& c: objArray) {
//             c.x = rand()%500;
//             c.y = rand()%300;
//             c.radius = rand()%100;
//             c.draw();
//             }
//         char ch = _getch(); // 사용자로부터 하나의 글자를 받음.
//         if (ch == 'q') break; // q 입력시 빠져 나간다.
//     }
//     return 0;

// }
int main(void)
{
    // example1();
    return 0;
}