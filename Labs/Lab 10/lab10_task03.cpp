#include <iostream>
using namespace std;


#define ASSIGN_MAX(a, b) \
    if(a > b) { \
        b = a; \
    } \
    else { \
        a = b; \
    }
    
int main() {

    int x = 18;
    int y = 25;

    ASSIGN_MAX(x, y);

    cout << x << " " << y << endl;
}