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

    Ellipse():Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
    {
        x1 = 520;
        y1 = 200;
        a = 170;
        b = 100;
    }
};

#endif // ELLIPSE_H
