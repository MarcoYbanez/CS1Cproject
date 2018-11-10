#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Ellipse : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int a; //semi-major axis
    int b; //semi-minor axis
public:
    void draw()
    {
       painter.drawEllipse(x1,y1,a,b);
    }

    void move()
    {

    }

    void perimeter()
    {

    }

    void area()
    {

    }
};



#endif // ELLIPSE_H
