
#include "stack.cpp"

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