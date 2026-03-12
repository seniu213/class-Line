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


    void setA(Point const aa) {
        a = new Point(aa);
    }
    void setB(Point const bb) {
        b = new Point(bb);
    }
    Point getA() {
        return *a;

    }
    Point getY() {
        return *b;
    }




    Line(Point* aa, Point* bb) : a(aa), b(bb) {}
};
#endif //UNTITLED_LINE_H