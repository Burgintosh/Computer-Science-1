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
        return m + add(decrement(n), increment(m));
    }
}

int main() {
    int n = 7;
    int m = 5;
    int i = add(n, m);
    cout << i << endl;
}