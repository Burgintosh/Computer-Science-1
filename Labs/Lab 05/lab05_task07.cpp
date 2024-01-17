#include <iostream>
using std::cout;
using std::endl;

unsigned int increment(unsigned int n) {
    return n + 1;
}
unsigned int decrement(unsigned int n) {
    return n - 1;
}
int add(int n, int m) {
    if(n == 0) {
        return m;
    }
    else {
        return add(decrement(n), increment(m));
    }
}
int mult(int n, int m) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return m;
    }
    else {
        return add(m, mult(decrement(n),m));
    }
}

int main() { // Edit this program to work with negative numbers
    int n = 7;
    int m = 5;
    int i = add(n, m);
    int j = mult(n,m);
    cout << i << endl;
    cout << j << endl;
}