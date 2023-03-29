//Burgess Doan

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool PrimeCheck(unsigned int n) {
    if(n > 2) {
        for(int i = 2; i < n; i++) {
            if(n % i == 0)  {
                return false;
            }
        }
        return true;
    }
    else if(n == 2) return true;
    else return false;
    
}

int main() {
    cout << PrimeCheck(2) << endl;
    cout << PrimeCheck(3) << endl;
    cout << PrimeCheck(4) << endl;
    cout << PrimeCheck(5) << endl;
    cout << PrimeCheck(13) << endl;
    cout << PrimeCheck(19) << endl;
    cout << PrimeCheck(21) << endl;
    cout << PrimeCheck(22) << endl;
}