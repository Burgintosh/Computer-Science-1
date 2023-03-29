#include <iostream>
// Friendship is not inherited
class Shape {
    public:
        virtual double area() const = 0; // Adding const ensures the function does not change any member variables
        virtual double perimeter() const = 0; //These are pure virtual functions (just declared and set to 0), they make the class abstract

        void print() const {
            std::cout << "area: " << area() << ", per: " << perimeter() << std::endl;
        }
};

class Circle : public Shape {
    double radius;
    public:
        /*explicit Circle(double radius) 
            : radius(radius) {}*/
        Circle(double radius) 
            : radius(radius) {}
        virtual double area() const {
            return radius * radius * 3.14159265;
        }

        virtual double perimeter() const {
            return 2 * radius * 3.14159265;
        }

        void print() const {
            std::cout << "radius: " << radius << ", ";
            Shape::print();  
        }
};

class Rectangle : public Shape {
    //protected: // This is an alternative way to allow Square to see these vars along with the commented code in Square's constuctor.
    double length, width;
    public:
        Rectangle(double length, double width)
            :length(length), width(width) {}
        
        virtual double area() const {
            return length * width;
        }
        virtual double perimeter() const {
            return 2 * (length + length);
        }
};

class Square : public Rectangle {
    public:
        Square(double side) 
            //: length(side), width(side) {}
            : Rectangle(side, side) {}


};

void print_shape(const Shape& sh) {
    std::cout << "area: " << sh.area() << std::endl;
}

void print_circle(const Circle c) {
    std::cout << "cirlce -per:  " << c.perimeter() << std::endl; 
}

int main() {

    std::cout << "Circle: " << std::endl;
    Circle circle(3.14);
    circle.print();
    print_shape(circle);

    std::cout << "Another Circle: " << std::endl;
    print_circle(12.0); //Doesn't compile if Circle constructor has "explicit" before it. (Stops implicit constructor)

    std::cout << "Square: " << std::endl;
    Square square(3.14);
    std::cout << "per: " << square.perimeter() << std::endl;

    std::cout << "Rectangle: " << std::endl;
    Rectangle rectangle(4.13, 1.43);
    std::cout << "area: " << rectangle.area() << std::endl;

    return 0;
}