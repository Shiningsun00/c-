#include <iostream>
#include <string>
using namespace std;

class Book {
private :
    string title;
    int price;
    public:
public:
    Book(string name, int price) : title{name}, price{price} {}
    void print() {
        cout <<"제목 :" << title << ",          가격 :" << price << endl;
    }
};

int main(void) { 
    Book books[2] = {
            Book("C++ 언어", 25000),
            Book("C   언어", 22000)
    };
    cout << "소장하고 있는 책 정보" << endl;
    cout << "=====================================" << endl;
    for (Book& b : books)
        b.print();
    cout << "=====================================" << endl;
    return 0;
}