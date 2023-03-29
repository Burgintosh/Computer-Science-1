#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Point {
    double x,y;
    Point(double x, double y) : x(x), y(y) {}
};

struct Rectangle {
    double x1,x2,y1,y2;
    Rectangle(double x1_, double x2_, double y1_, double y2_) {
        if(x1_ > x2_) {
            x1 = x2_;
            x2 = x1_;
        }
        else {
            x1 = x1_;
            x2 = x2_;
        }
        if(y1_ > y2_) {
            y1 = y2_;
            y2 = y1_;
        }
        else {
            y1 = y1_;
            y2 = y2_;
        }
    }
    Rectangle(Point a, Point b) {
        if(a.x > b.x) {
            x1 = b.x;
            x2 = a.x;
        }
        else {
            x1 = a.x;
            x2 = b.x;
        }
        if(a.y > b.y) {
            y1 = b.y;
            y2 = a.y;
        }
        else {
            y1 = a.y;
            y2 = b.y;
        }
    }

};

int main() {
    Rectangle recs[2] = {Rectangle(12.0, 3.0, 1.0, -3.0), Rectangle(Point(-3.5, -1.9), Point(-12.5, 2.1))};

    for(int i = 0; i < 2; i++) {
        double area;
        double perimeter;
        area = abs(recs[i].x2 - recs[i].x1) * abs(recs[i].y2 - recs[i].y1);
        perimeter = (abs(recs[i].x2 - recs[i].x1)*2 + abs(recs[i].y2 - recs[i].y1)*2);
        cout<< recs[i].x2 - recs[i].x1 << endl;
        cout<< recs[i].x2 - recs[i].x1 << endl;

        // And do not change this:
        cout << "Rect[" << i << "] : " << endl;
        cout << "x1: " << recs[i].x1 << ", x2: " << recs[i].x2 << ", y1: " <<  recs[i].y1 << ", y2: " << recs[i].y2 << endl;
        cout << "(area: " << area << ", perimeter: " << perimeter << ")" << endl;
    }
    return 0;
}