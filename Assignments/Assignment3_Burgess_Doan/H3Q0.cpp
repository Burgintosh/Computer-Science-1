#include <iostream>
using namespace std;

class Point {

    virtual void area() = 0;
    virtual void perimeter() = 0;
    virtual void get_min_y() = 0;
    virtual void get_max_y() = 0;
    virtual void get_min_x() = 0;
    virtual void get_max_x() = 0;
    virtual void get_name() = 0;

    const void print_extremums() {
        cout << "Max x: " << get_max_x << endl;
        cout << "Min x: " << get_min_x << endl;
        cout << "Max y: " << get_max_y << endl;
        cout << "Min y: " << get_min_y << endl;
    }
    const void print_area() {
        cout << "Area: " << area() << endl;
    }
    const void print_perimeter() {
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {



}