#include <iostream>

enum class Department {EE, CS};
enum class Grade {A, A_minus, B_plus, B, B_minus, C_plus, C, C_minus, F};
enum class Qualification {undergraduate, postgraduate};

struct Course {
    Department department;
    std::string name;
    unsigned short code;
    Course(Department department, std::string name, unsigned short code) : department(department), name(name), code(code)
    {}
};

Course hulb(Department::EE,"Programming for ECE", 1080);

struct CourseTaken {
    Course course;
    Grade grade;
    CourseTaken(Course course = hulb, Grade grade = Grade::F) : course(course), grade(grade)
    {}
};




struct Student {
    std::string name;
    float GPA;
    unsigned short age;
    Qualification qualification;
    unsigned short n_courses = 0;
    CourseTaken courses[100];
    Student(std::string name,float GPA, unsigned short age, Qualification qualification)
    : name(name), GPA(GPA), age(age), qualification(qualification)
    {}
};

void printDepo( int var) {
    if(var == 0)
        std::cout << "EE";
    else if(var == 1)
        std::cout << "CS";
}

int main() {

    Course course1(Department::EE,"Programming for ECE", 1080);
    Course course2(Department::CS,"Computer Science 1", 1021);

    CourseTaken ct1(course1, Grade::A);
    CourseTaken ct2(course2, Grade::F);

}