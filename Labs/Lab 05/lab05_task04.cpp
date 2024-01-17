#include <iostream>
using std::cout;
using std::endl;
// This is not finished. My head hurts.
void fact(unsigned int& n) {
    int temp;
    while(n > 0) {
        temp = n * (n-1);
        n = n - 1;
    }
    n = temp;
}

int main() {
    unsigned int n = 7;
    fact(n);
    cout << n << endl; // Prints 
}