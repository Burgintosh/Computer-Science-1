#include <iostream>
using std::cin;
using std::cout;

// Write a program that reads an integer and prints "odd if the integer is odd and "even if the integer is even."
int main() {
    int integer1;
    cin >> integer1;
    bool check = integer1 % 2 == 0;
    if(check)
        cout << "even";
    else
        cout << "odd";
}