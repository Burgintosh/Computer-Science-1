#include <iostream>
using std::cout;
using std::endl;

void mult(int& input) {
    input *= 2;
}

int main() {
    int i = 7;
    cout << i << endl; // Prints 7
    mult(i);
    cout << i << endl; // Prints 14
}