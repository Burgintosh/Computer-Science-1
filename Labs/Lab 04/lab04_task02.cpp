#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::to_string;

// Write a program that reads an integer and prints "odd if the integer is odd and "even if the integer is even."
int main() {
    int n;
    unsigned int m;
    cin >> n >> m;
    string ncont = "";
    for(int i = 0; i<m; i++) {
        ncont = ncont + to_string(n);
    }
    cout << ncont;
    
}