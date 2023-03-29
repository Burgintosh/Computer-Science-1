#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    int n; int star; int space;
    star = 1;
    cout << "Enter the number of lines for the triangle: " << endl;
    cin >> n;
    space = n-1;
    for(int i = 0; i < n; i++) {
        for(int j = space; j >=0; j--) {
            cout << " ";
        }
        space--;
        for(int k = 0; k < star; k++) {
            cout << "*";
        }
        star+=2;
        cout << endl;
    }

}