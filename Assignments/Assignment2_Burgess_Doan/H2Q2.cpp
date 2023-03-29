//Burgess Doan

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int count_old = 0;
int count = 0;

unsigned long fib(unsigned long n) {
    count_old++;
if(n <= 1)  return n;
return fib (n - 2) + fib(n - 1) ;
}

unsigned long Fib(unsigned long n) {
    int a = 0;
    int b = 1;
    int c = 0;
    int arr[100];
    

    for(int i = 0; i <= n; i++) {
        if(i != 0 && i != 1) {
            arr[i] = arr[i-2] + arr[i-1];
        }
        else {
            arr[i] = i;
        }
        count++;
    }
    
    return arr[n];
}

int main() {

    cout << fib(10) << endl;
    cout << "The original code called " << count_old << " times. " << endl;
    cout << Fib(10) << endl;
    cout << "The optimized code called " << count << " times. " << endl;
}