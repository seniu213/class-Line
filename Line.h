#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;


class Line {
    public:
    Point* a;
    Point* b;


    double mod() {
        return sqrt(pow(a->y - a->x, 2)+pow(b->y-b->x, 2));
    }


    void setX(double const x) {
        a->x = x;
    }
    void setY(double y) {
        a->y = y;
    }
    double getX() {
        return a->x;
    }
    double getY() {
        return a->y;
    }




    Line(Point* aa, Point* bb) : a(aa), b(bb) {}
};
#endif //UNTITLED_LINE_H