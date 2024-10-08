#include <iostream>
#include <string>
using namespace std;
class Movie {
private:
    string title;
    string director;
    string actors;
    string grade;
    
public:
    void setTitle(const string t) { title = t; }
    void setDirector(const string d) { director = d; }
    void setActors(const string a) { actors = a; }
    void setGrade(const string g) { grade = g; }

    string getTitle() const { return title; }
    string getDirector() const { return director; }
    string getActors() const { return actors; }
    string getGrade() const { return grade; }
}; 

int main() {
    Movie mv;
    mv.setTitle("Mission Impossible Dead Reckoning, 2023");
    mv.setDirector("Christopher McQuarrie");
    mv.setActors("Tom Cruise");
    mv.setGrade("PG-13");
    cout << mv.getTitle() << endl;
    cout << mv.getDirector() << endl;
    cout << mv.getActors() << endl;
    cout << mv.getGrade() << endl;
    return 0;
}