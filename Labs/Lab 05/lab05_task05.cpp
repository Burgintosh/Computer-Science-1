#include <iostream>
using std::cout;
using std::endl;

int abs1(int& n) {
    if(n >= 0)  return n;
    else    return -n;
}

int main() {
    int n = -7;
    cout << n << endl; // Prints -7
    int i = abs1(n);
    cout << i << endl; // Prints 7
}