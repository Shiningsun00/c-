#include <iostream>
using namespace std;
class Rectangle {
private:
    int Width;
    int Height;
    int Area;
public:
    void setHeight (const int h) {Height = h;}
    void setWidth(const int w) {Width = w;}
     void greet mm
};

int main() {
    Rectangle r1;
    r1.setHeight(3);
    r1.setWidth(7);
    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getHeight() << endl;
    cout << "Area = " << r1.getArea() << endl << endl;
    return 0;
}