#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

void FizzBuzz(int n) {
    if(n % 3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if(n % 3 == 0) {
        cout << "Fizz";
    }
    else if(n % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << "No.";
    }
}


int main() {
    FizzBuzz(22);
}