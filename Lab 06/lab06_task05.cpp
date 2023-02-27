#include <iostream>
using std::cin;
using std::cout;
using std::string;


char _hash(string s) {
    char h = 0;
    for(int i = 0; i < s.size(); i++) {
        h |= s[i];
    }
    return h;
}

int main() {
    char h = _hash("Hello");
    cout << h;
}