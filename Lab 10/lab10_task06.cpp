#include "stack2.h"

int main() {
    stack <double, 100> test;
    double testval;
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
