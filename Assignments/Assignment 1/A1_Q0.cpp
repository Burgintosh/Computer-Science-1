#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    int val1; int val2;

    cout << "Enter Values 1 and 2" << endl;
    cin >> val1 >> val2;
    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl;

    int temp = val1;
    val1 = val2;
    val2 = temp;

    cout << "Swapping\n\n";
    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl; 
}