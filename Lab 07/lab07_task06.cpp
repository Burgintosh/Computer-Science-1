#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

void FizzBuzz(int n) {
    if(n % 3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    else if(n % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if(n % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << "No." << endl;
    }
}


int main() {
    FizzBuzz(15);
    FizzBuzz(21);
    FizzBuzz(25);
    FizzBuzz(0);
    FizzBuzz(-3);
    FizzBuzz(22);
}