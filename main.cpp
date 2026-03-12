#include <iostream>
using namespace std;
#include "Point.h"
#include "Line.h"


int main() {

    Point* p1 = new Point(1, 3);
    Point* p2 = new Point(2, 3);
    Point* p3 = new Point(3, 3);
    Point* p4 = new Point(4, 3);

    Line* l1 = new Line(p1, p2);
    Line* l2 = new Line(p3, p4);

    cout << l1->mod() << endl;
    cout << l2->mod() << endl;

    delete l1;


    return 0;


}