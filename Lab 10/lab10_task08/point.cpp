#include <iostream>
#include "point.h"
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

void print_point(const Point& pt) {
    cout << "x: " << pt.get_x() << ", y: " << pt.get_y() << endl;
}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}