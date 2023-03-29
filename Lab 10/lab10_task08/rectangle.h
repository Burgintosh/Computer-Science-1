#include "point.cpp"
class Rectangle {
private:
    Point top_left, bottom_right;
public:
    Rectangle(Point p1, Point p2);
    Rectangle(double x1, double x2, double y1, double y2);
    double get_area() const;
};