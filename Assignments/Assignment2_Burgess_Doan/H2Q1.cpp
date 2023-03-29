//Burgess Doan

#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class stack {
    double arr[100];
    int length = 0;
    public:
        bool push(stack a, float new_val) {
            if(length+1 > 100 || length < 0) {
                return false;
            }
            else {
                arr[length] = new_val;
                length++;
                return true;
            }
        }
        bool pop(stack a, float& val) {
            if(length > 100 || length < 1) {
                return false;
            }
            else {
                val = arr[length-1];
                arr[length-1] = 0;
                length = length - 1;
                return true;
            }
        }
        double peek(stack a, float& val) {
            if(length < 1) {
                return false;
            }
            else {
                val = arr[length-1];
                return true;
            }
        }
        bool is_empty(stack a) {
            if(length < 1) {
                return true;
            }
            else {
                return false;
            }
        }
        int member() {
            return length;
        }
};


int main() {
    stack test;
    float testval;
    for(int i = 0;  i < 102; i++) {
        test.push(test, i+1);
    }

    cout << test.member() << endl;
    cout << test.peek(test, testval) << endl;
    cout << testval << endl;
    cout << test.pop(test, testval) << endl;
    cout << testval << endl;
    cout << test.peek(test, testval) << endl;
    cout << testval << endl;
}