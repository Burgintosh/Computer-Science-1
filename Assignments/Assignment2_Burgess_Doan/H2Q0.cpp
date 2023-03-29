//Burgess Doan

#include <iostream>
#include <string>
#include <math.h>
using std::string;
using std::cout;
using std::endl;

struct Student {
    string name;
    double gpa;
    unsigned short birth_year;
    string mid;
    Student(string name, double gpa, unsigned short birth_year, string mid) :
        name(name), gpa(gpa), birth_year(birth_year), mid(mid) {}
};

bool StudentDupeCheck(Student a, Student b) {
    if((a.name == b.name) && (abs(a.gpa - b.gpa) < pow(2,-20)) && (a.birth_year == b.birth_year) && (a.mid == b.mid))
        return true;
    else
        return false;
}

int main() {
    Student student1("Burg", 4.0, 2003, "14929945");
    Student student2("Luke", 3.5, 2004, "15634457");
    Student student3("Joel", 4.0, 2003, "12345567");
    Student student4("Burg", 4.0, 2003, "14929945");

    cout << StudentDupeCheck(student1, student2) << endl;
    cout << StudentDupeCheck(student1, student4) << endl;
}