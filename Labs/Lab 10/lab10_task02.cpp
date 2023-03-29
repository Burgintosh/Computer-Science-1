#include <iostream>
using namespace std;

int main() {

    #ifdef __APPLE__
    cout << "Apple" << endl;
    #elif defined(_WIN32)
    cout << "Windows" << endl;
    #elif defined(__linux__)
    cout << "Linux" << endl;
    #elif defined(__ANDROID__)
    cout << "Android" << endl;
    #else
    cout << "Unknown" << endl;
    #endif
}