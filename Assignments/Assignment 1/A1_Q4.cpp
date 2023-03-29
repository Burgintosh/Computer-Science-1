#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    string normal;
    string reversed = "";
    bool palindrome = 1;
    cout << "Enter a string to be checked for palindrome" << endl;
    cin >> normal;
    

    for(int i = normal.length()-1; i >= 0; i--) {
        reversed = reversed + normal[i];
    }
    cout << reversed;
    for(int i = normal.length()-1; i >= 0; i--) {
        if(toupper(reversed[i]) != toupper(normal[i])) {
            palindrome = 0;
            break;
        }
    }
    if(palindrome) {
        cout << "\nThe string is a palindrome" << endl;
    }
    else {
        cout << "\nThe string is not a palindrome" << endl;
    }
}