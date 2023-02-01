#include <iostream>


enum class Department {EE, CS};

void printDepo( int var) {
    if(var == 0)
        std::cout << "EE";
    else if(var == 1)
        std::cout << "CS";
}

int main() {

    Department var1 = Department::EE;
    Department var2 = Department::CS;

    printDepo((int)var1);
    printDepo((int)var2);

}