#include <iostream>
using std::cout;
using std::endl;

int fact(int n) {
    if(n == 0)   return 1;
    else return n * fact(n-1);
}

int main() {
    int i = 7;
    cout << i << endl; // Prints 7
    cout << fact(i) << endl; // Prints 5040
}