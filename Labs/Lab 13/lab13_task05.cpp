#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

int main() {
    srand((unsigned int) time(NULL) + (50 * time(NULL)));
    for(int i = 0; i < 10; i ++) {
        cout << (rand() / (float) RAND_MAX) * 10 << endl;
    }
}