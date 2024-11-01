#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person::Person(string n, int a) {
        name = n;
        age = a;
    }
    string get_name() { return name; }
    int get_age() { return age; }
    void print() {
    cout << name << " " << age << endl;
    }
};

bool compare(Person &p, Person &q) // 나이순 정렬을 위한 비교 함수
{
    return p.get_age() < q.get_age();
}
int main()
{
    vector<Person> list;
    list.push_back(Person("Kim", 30));
    list.push_back(Person("Park", 22));
    list.push_back(Person("Lee", 26));
    sort(list.begin(), list.end(), compare); // stl 알고리즘. sort()
    for (auto& e : list) {
        e.print();
    }
    return 0;
}