#include <iostream>
#include "rectangle.cpp"
using namespace std;




int main() {
    Point pt1(7, 11);
    Point pt2(13, 17);
    Rectangle rect(pt1, pt2);
    cout << rect.get_area() << endl;
    return 0;
}