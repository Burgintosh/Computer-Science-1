#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class Fibo {

    friend void reset(Fibo &a);

    unsigned int n;
    int a = 0;
    int b = 1;
    int c = 0;
    int arr[100];

    int Fib() {
        
        if(n != 0 && n != 1) {
            arr[n] = arr[n-1] + arr[n-2];
            }
        c = arr[n];
        return c;
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
            arr[0] = 0;
            arr[1] = 1;
            cout << "Fibo instantiated!" << endl;
        }
};

void reset(Fibo &a) {
    a.n = 0;
    a.a = 0;
    a.b = 1;
    a.c = 0;
}

int main() {
    Fibo fib;
    fib.get_next();
    reset(fib);
    fib.get_next();
    fib.get_next();
}