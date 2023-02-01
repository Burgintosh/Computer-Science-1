#include <iostream>

enum class Department {EE, CS};

struct Course {
    Department department;
    std::string name;
    unsigned short code;
    Course(Department department, std::string name, unsigned short code) : department(department), name(name), code(code)
    {

    }
};


void printDepo( int var) {
    if(var == 0)
        std::cout << "EE";
    else if(var == 1)
        std::cout << "CS";
}

int main() {

    Course course1(Department::EE,"Programming for ECE", 1080);
    Course course1(Department::CS,"Computer Science 1", 1021);

}