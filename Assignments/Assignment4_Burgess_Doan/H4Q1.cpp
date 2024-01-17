#include <iostream>
#include <bitset>
#include <cmath>
using std::cout;
using std::endl;

float FloatConv(unsigned int convertee) {
    bool negative_sign;
    int exponent = 0;
    int significand = 0;
    float converted;
    std::bitset<8> bits(convertee);
    std::string bit_string = bits.to_string();

    if(bit_string[0] == 0)  negative_sign = false;
    else    negative_sign = true;

    int location = 0;
    for(int i = 8; i >= 1; i--) {
        if(bit_string[i] == 1) {
            exponent = exponent + std::pow(2,location);
        }
        location++;
    }

    location = 0;
    for(int i = 31; i > 8; i--) {
        if(bit_string[i] == 1) {
            significand = significand + std::pow(2,location);
        }
        location++;
    }

    cout << negative_sign << endl;
    cout << exponent << endl;
    cout << significand << endl;

    return converted;
}

int main() {
    FloatConv(1105068032);
}