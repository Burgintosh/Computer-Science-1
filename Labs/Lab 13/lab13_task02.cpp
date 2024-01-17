#include <iostream>
#include <fstream>
using std::ifstream;
using std::cout;
using std::ofstream;
using std::endl;

int main() {
    ifstream file1("baconipsum.txt");
    ofstream file2("outputfile.txt");
    std::string current;
    while(getline(file1, current)) {
        file2 << current << endl;
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