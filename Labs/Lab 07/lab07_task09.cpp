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
    int arr[100];
    

    

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
        int Fib() {
            if(n != 0 && n != 1) {
                arr[n] = arr[n-1] + arr[n-1];
                }
            c = arr[n];
            return c;
        }
        void get_next() {
            Fib();
            FizzBuzz();
            n++;
        }
        Fibo(int n) : n(n) {
            arr[0] = 0;
            arr[1] = 1;
            cout << "Fibo instantiated!" << endl;
        }
        ~Fibo() {
            cout << "Fibo is being destroyed." << endl;
        }
};

int main() {
    Fibo fib1(1);
    fib1.get_next();
    Fibo fib0(0);
    fib0.get_next();
    Fibo fib10(10);
    fib10.get_next();
    Fibo fib20(20);
    fib20.get_next();

}