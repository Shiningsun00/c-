#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
char *name; int number;
public:
    Student(const char *pn, int n) {
        name = new char[strlen(pn)+1];
        strcpy(name, pn);
        number = n;
    }
    Student(const Student &s) {
        name = new char[strlen(s.name) + 1]; // 새로운 메모리 할당
        strcpy(name, s.name);                // 데이터 복사
        number = s.number;
    }
    ~Student() { delete [] name; }

    void setName(const char *pn) {
        delete[] name; // 이거 추가 안하면 소멸자 사용할 때  name이 두번 delete되어 문제 발생할수도 있고 
                       // 복사생성자로 만들어진 객체속 name이 같은 주소를 가지고 있는 포인터여서 s2를 수정해도 
                       // s1도 같이 바뀌는 오류가 생길 수 있음.
        name = new char[strlen(pn)+1];  // NULL문자가 빠진 길이를 세서 1개 추가
        strcpy(name, pn);
    }
    // int getNumber
    
    void printInfo() {
        cout << "이름: " << name << " ";
        cout << "학번: " << number << endl;
    }
};

// void displayStudent(Student obj){ //전역 함수의 형식매개변수가 객체. (복사 생성자 호출)
//     cout << "이름: " << obj.getName() << endl;
//     cout << "학번: " << obj.getNumber() << endl;
// }


int main(){
    Student s1("Park", 20100001); // name 공간할당
    Student s2(s1); // (얕은) 복사 생성자
    // name 공간할당 없음
    s1.printInfo(); s2.printInfo();
    s1.setName("Kim");
    s1.printInfo(); s2.printInfo();
}