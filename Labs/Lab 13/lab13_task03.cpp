#include <iostream>
#include <fstream>
#include <string>
using std::ifstream;
using std::cout;
using std::ofstream;
using std::fstream;
using std::endl;

int main() {
    fstream file1("double.txt");
    std::string current;
    std::string hold[1000];
    int length = 0;

    while(getline(file1, current)) {
        hold[length] = current;
        length++;
    }

    file1.close();

    file1.open("double.txt");
    for(int i = 0; i < length; i++) {
        file1 << current[i] << endl << current[i] << endl;
    }
    /*if (!file1.is_open()) {
        cout << "file1 is not open.";
        return;
    }*/
    

    //if (!file2.is_open()) {
    //    cout << " file2 is not open . " ;
    //    return;
    //}
}