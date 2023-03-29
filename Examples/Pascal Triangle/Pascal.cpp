#include <iostream>

using std::cout;
using std::endl;

int counter = 0;

/*int pascal(int row, int col) {
    counter+=1
    if(col == 0 || col == row) return 1;
    else return pascal(row - 1, col - 1) + pascal(row - 1, col);
}*/



int arr[100][100];


int pascal(int row, int col) {
    counter+=1;
    if(col == 0 || col == row) return 1;

    if(arr[row-1][col-1] == 0) arr[row-1][col-1] = pascal(row-1, col-1);

    if(arr[row-1][col] == 0) arr[row-1][col] = pascal(row-1, col);

    return arr[row-1][col-1] + arr[row-1][col];
}


int main() {
    const int n = 10;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; i <= i; j++) {
            cout << pascal(i,j) << " ";
        }
    }

    cout << "Counter = " << counter;

     return 0;
}