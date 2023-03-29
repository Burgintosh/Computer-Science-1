#include <iostream>

typedef unsigned long ulong, ular4[4], &ulref;
int main() {
    ulong a = 1231;
    ulref b = a; b++;
    ular4 arr = {2,3,5,7};
    std::cout << arr[0] << ", " << a << std::endl;
}