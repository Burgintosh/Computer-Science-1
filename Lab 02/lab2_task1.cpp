#include <iostream>

int main() {

    // TASK 1
    double partOne = abs(0.3);
    double partTwo = abs(0.1 + 0.2);
    bool comp = (partOne == partTwo);
    std::cout << partOne << std::endl << partTwo << std::endl << comp << std::endl;
    
    // partOne and partTwo both output 0.3, but comp outpoints 0, suggesting they are not equal to each other.
    //This occurs because the compiler is unable to store 0.3 as an exact value, so it is slightly off when added to.
}