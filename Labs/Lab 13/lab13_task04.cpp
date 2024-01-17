#include <iostream>
#include <string>
#include <cstring>
using std::ifstream;
using std::cout;
using std::ofstream;
using std::fstream;
using std::endl;

int main(int argc, const char* argv[]) {
    if(argc == 1) {
        cout << "Compiling into a.out" << endl;
        exit;
    }
    else {

        int i = 0;
        while(i < argc-1) {
            if(strcmp(argv[i], "-o") != 0) {
                i++;
            }
        }

        if(i < argc-1) {
            if(strcmp(argv[i+1], "hw") == 0)  {
                cout << "Compiling into hw " << endl;
            }
            else {
                cout << "Compilation failed. No output name specified" << endl;
            }
        }
    }
}