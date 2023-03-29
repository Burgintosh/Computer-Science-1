#include <iostream>
using namespace std;

const double pi = 3.1415;

int fn1(int i);

int fn0(int i) {
    cout << pi << endl;
    if (i < 0) return fn1(i);
    return i;
}
int fn1(int i) {
    cout << pi << endl;
    if (i < 0) return fn0(-i);
    return i;
}
int main() {
    cout << fn0(-5) << endl;
}