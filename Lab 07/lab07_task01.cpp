#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

struct Point {
    double x;
    double y;
    Point(double x, double y) : x(x), y(y)
    {

    }
};

void modPoint(Point a) {
    a.y +=1;
    cout << "y = " << a.y << endl;
}

int main() {

    Point myPoint(10,10);
    modPoint(myPoint);
    cout << "y = " << myPoint.y << endl;
}