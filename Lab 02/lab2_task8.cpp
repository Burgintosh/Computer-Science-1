#include <iostream>

struct Point {
    int x;
    int y;

    Point(int x,int y) {
        this->x = x;
        this->y = y;
    }
};

struct Quadrilateral {
    int top_right;
    int top_left;
    int bottom_right;
    int bottom_left;
    int xtop_right;
    int ytop_right;
    int xtop_left;
    int ytop_left;
    int xbottom_right;
    int ybottom_right;
    int xbottom_left;
    int ybottom_left;

    Quadrilateral(int top_right, int top_left, int bottom_right, int bottom_left) {
        this->top_right = top_right;
        this->top_left = top_left;
        this->bottom_right = bottom_right;
        this->bottom_left = bottom_left;
    }
    Quadrilateral(int xtop_right, int ytop_right, int xtop_left, int ytop_left, int xbottom_right, int ybottom_right, int xbottom_left, int ybottom_left) {
        this->xtop_right = xtop_right;
        this->ytop_right = ytop_right;
        this->xtop_left = xtop_left;
        this->ytop_left = ytop_left;
        this->xbottom_right = xbottom_right;
        this->ybottom_right = ybottom_right;
        this->xbottom_left = xbottom_left;
        this->ybottom_left = ybottom_left;
    }

        
};


int main() {

    //TASK 8

    Quadrilateral dumb(0,0,0,1,1,0,1,1);
    float top_side = abs(dumb.xtop_right - dumb.xtop_left) + abs(dumb.ytop_right - dumb.ytop_left);
        float left_side = abs(dumb.xtop_left - dumb.xbottom_left) + abs(dumb.ytop_left - dumb.ybottom_left);
        float right_side = abs(dumb.xtop_right - dumb.xbottom_right) + abs(dumb.ytop_right - dumb.ybottom_right);
        float bottom_side = abs(dumb.xbottom_right - dumb.xbottom_left) + abs(dumb.ybottom_right - dumb.ybottom_left);

        float p = top_side + left_side + right_side + bottom_side;
        std::cout << p;
}