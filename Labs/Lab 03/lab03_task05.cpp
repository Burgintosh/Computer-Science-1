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

    Student student1("Jon", 4.0, 21, Qualification::undergraduate);
    student1.n_courses += 1;
    student1.courses[student1.n_courses] = ct2;
    student1.n_courses += 1;
    std::cout << student1.name << " is a " << static_cast<int>(student1.qualification) << " student who has taken " << student1.courses[0].course.name << " and " << student1.courses[1].course.name << " and got a " << static_cast<int>(student1.courses[0].grade) << " and a " << static_cast<int>(student1.courses[1].grade);

}