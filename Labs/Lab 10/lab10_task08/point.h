class Point {
private:
    const double x, y;
public:
    Point(double x, double y);
    double get_x() const;
    double get_y() const;
};

void print_point(const Point& pt);