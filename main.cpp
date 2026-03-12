#include <iostream>
using namespace std;
#include "Point.h"
#include "Line.h"


int main() {
    auto l = new Point(3, 4);
    auto r = new Point(5, 6);
    auto line = new Line(l, r);

    cout << line->mod();


}