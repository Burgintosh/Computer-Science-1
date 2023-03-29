#include <iostream>
#include "rectangle.h"
using std::min;
using std::max;

Rectangle::Rectangle(Point p1, Point p2) :
    top_left(min(p1.get_x(), p2.get_x()), max(p1.get_y(), p2.get_y())),
    bottom_right(max(p1.get_x(), p2.get_x()), min(p1.get_y(), p2.get_y())) {}

Rectangle::Rectangle(double x1, double x2, double y1, double y2) :
    Rectangle(Point(x1, y1), Point(x2, y2)) {}

double Rectangle::get_area() const {
    return (bottom_right.get_x() - top_left.get_x()) * (top_left.get_y() - bottom_right.get_y());
}