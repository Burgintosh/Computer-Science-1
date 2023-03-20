#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class Fibo {
    unsigned int n;
    int a = 0;
    int b = 1;
    int c = 0;

    int Fib() {
        if(n == 0) {
            c = 0;
            return c;
        }
        else if(n == 1) {
            c = 1;
            return c;
        }
        else {
            for(int i = 1; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            return c;
        }
    }

    void FizzBuzz() {
        if(c % 3 == 0 && c % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if(c % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else if(c % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << "No." << endl;
        }
    }
    public:
        void get_next() {
            Fib();
            FizzBuzz();
            n++;
        }
        Fibo() {
            n = 0;
            cout << "Fibo instantiated!" << endl;
        }
};

int main() {
    Fibo fib;
    fib.get_next();
    fib.get_next();
    fib.get_next();
}