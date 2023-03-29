#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    string normal;
    string reversed = "";
    cout << "Enter a word to be reversed" << endl;
    cin >> normal;

    for(int i = normal.length()-1; i >= 0; i--) {
        reversed = reversed + normal[i];
    }
    cout << reversed;
}