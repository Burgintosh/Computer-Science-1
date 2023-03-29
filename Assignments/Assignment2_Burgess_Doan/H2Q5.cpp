//Burgess Doan

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Rod {
    int disks[10];
    int length = 0;
    string rodname;
    Rod(string rodname) : rodname(rodname) {}
};

void PopulateRods(struct Rod &rod1, struct Rod &rod2, struct Rod &rod3, int n) {
    for(int i = 0; i < 10; i++) {
        rod1.disks[i] = 0;
        rod2.disks[i] = 0;
        rod3.disks[i] = 0;
    }

    for(int i = 1; i <= n; i++) {
        rod1.disks[i] = n-i+1;
    }
    rod1.length = n;
    rod2.length = 0;
    rod3.length = 0;
}

void TowerofHanoi(struct Rod &rod1, struct Rod &rod2, struct Rod &rod3, int n) { // n can be a number from 1-10

    while(rod3.length != n) {
        if(n % 2 == 0) {

            //Legal move between 1 and 2
            if(rod2.disks[rod2.length] > rod1.disks[rod1.length] || rod2.length == 0) {
                cout << "Disk " << rod1.disks[rod1.length] << " moved from " << rod1.rodname << " to " << rod2.rodname << endl;
                rod2.disks[rod2.length+1] = rod1.disks[rod1.length];
                rod1.disks[rod1.length] = 0;
                rod2.length++;
                rod1.length--;
            }
            else {
                cout << "Disk " << rod2.disks[rod2.length] << " moved from " << rod2.rodname << " to " << rod1.rodname << endl;
                rod1.disks[rod1.length+1] = rod2.disks[rod2.length];
                rod2.disks[rod2.length] = 0;
                rod1.length++;
                rod2.length--;
            }

            //Legal move between 1 and 3
            if(rod3.disks[rod3.length] > rod1.disks[rod1.length] || rod3.length == 0) {
                cout << "Disk " << rod1.disks[rod1.length] << " moved from " << rod1.rodname << " to " << rod3.rodname << endl;
                rod3.disks[rod3.length+1] = rod1.disks[rod1.length];
                rod1.disks[rod1.length] = 0;
                rod3.length++;
                rod1.length--;
            }
            else {
                cout << "Disk " << rod3.disks[rod3.length] << " moved from " << rod3.rodname << " to " << rod1.rodname << endl;
                rod1.disks[rod1.length+1] = rod3.disks[rod3.length];
                rod3.disks[rod3.length] = 0;
                rod1.length++;
                rod3.length--;
            }

            //Legal move between 2 and 3
            if(rod2.disks[rod2.length] > rod3.disks[rod3.length] || rod3.length == 0) {
                cout << "Disk " << rod3.disks[rod3.length] << " moved from " << rod3.rodname << " to " << rod2.rodname << endl;
                rod2.disks[rod2.length+1] = rod3.disks[rod3.length];
                rod3.disks[rod3.length] = 0;
                rod2.length++;
                rod3.length--;
            }
            else {
                cout << "Disk " << rod2.disks[rod2.length] << " moved from " << rod2.rodname << " to " << rod3.rodname << endl;
                rod3.disks[rod3.length+1] = rod2.disks[rod2.length];
                rod2.disks[rod2.length] = 0;
                rod3.length++;
                rod2.length--;
            }
        }
        else {
            //Legal move between 1 and 3
            if(rod3.disks[rod3.length] > rod1.disks[rod1.length] || rod3.length == 0) {
                cout << "Disk " << rod1.disks[rod1.length] << " moved from " << rod1.rodname << " to " << rod3.rodname << endl;
                rod3.disks[rod3.length+1] = rod1.disks[rod1.length];
                rod1.disks[rod1.length] = 0;
                rod3.length++;
                rod1.length--;
            }
            else {
                cout << "Disk " << rod3.disks[rod3.length] << " moved from " << rod3.rodname << " to " << rod1.rodname << endl;
                rod1.disks[rod1.length+1] = rod3.disks[rod3.length];
                rod3.disks[rod3.length] = 0;
                rod1.length++;
                rod3.length--;
            }

            //Legal move between 1 and 2
            if(rod2.disks[rod2.length] > rod1.disks[rod1.length] || rod2.length == 0) {
                cout << "Disk " << rod1.disks[rod1.length] << " moved from " << rod1.rodname << " to " << rod2.rodname << endl;
                rod2.disks[rod2.length+1] = rod1.disks[rod1.length];
                rod1.disks[rod1.length] = 0;
                rod2.length++;
                rod1.length--;
            }
            else {
                cout << "Disk " << rod2.disks[rod2.length] << " moved from " << rod2.rodname << " to " << rod1.rodname << endl;
                rod1.disks[rod1.length+1] = rod2.disks[rod2.length];
                rod2.disks[rod2.length] = 0;
                rod1.length++;
                rod2.length--;
            }

            //Legal move between 2 and 3
            if(rod2.disks[rod2.length] > rod3.disks[rod3.length] || rod3.length == 0) {
                cout << "Disk " << rod3.disks[rod3.length] << " moved from " << rod3.rodname << " to " << rod2.rodname << endl;
                rod2.disks[rod2.length+1] = rod3.disks[rod3.length];
                rod3.disks[rod3.length] = 0;
                rod2.length++;
                rod3.length--;
            }
            else {
                cout << "Disk " << rod2.disks[rod2.length] << " moved from " << rod2.rodname << " to " << rod3.rodname << endl;
                rod3.disks[rod3.length+1] = rod2.disks[rod2.length];
                rod2.disks[rod2.length] = 0;
                rod3.length++;
                rod2.length--;
            }
        }
    }
}

int main() {
    struct Rod rod1("Rod 1");
    struct Rod rod2("Rod 2");
    struct Rod rod3("Rod 3");

    PopulateRods(rod1, rod2, rod3, 6);

    TowerofHanoi(rod1, rod2, rod3, 6);
}

