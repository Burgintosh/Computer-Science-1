#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a = 0; int b = a++; int c = ++b; int d = 2;
    bool e = false;
    cout << a << ", " << b << ", " << c << endl;
    if ((a != b) && !e) d *= 12;
    cout << d << endl;
    cout << (1 <= 3) << ", " << (1 & 3) << ", "
         << (1 | 3) << ", " << (~1) << ", "
         << (1 ^ 3) << ", " << (10 << 1) << endl;
}