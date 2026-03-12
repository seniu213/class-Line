#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H
#include <iostream>
using namespace std;


class Point {
    public:
    double x;
    double y;

    Point(double const xx, double const yy): x(xx), y(yy) {}
    Point(): x(0), y(0) {}
};




#endif //UNTITLED_POINT_H