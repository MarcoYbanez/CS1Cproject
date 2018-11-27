#ifndef ELLIPSE_H
#define ELLIPSE_H
#define PI 3.14159
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <math.h>
#include "shape.h"
using namespace std;

class Ellipse : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int a; //semi-major axis
    int b; //semi-minor axis
    double p;
    double h;
    double ar;
    QPen ellPen;
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
        double base1 = (a-b), base2 = (a+b), power = 2;
        h = pow(base1, power)/pow(base2, power);
        double square = sqrt(4-3*h);
        p = PI*base2*(1+3*h/10+square);
    }

    void area()
    {
        ar = PI * a * b;
    }

    QPen getPen()
    {
        return ellPen;
    }

    Ellipse():Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
    {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
        x1 = 520;
        y1 = 200;
        a = 170;
        b = 100;
    }

    Ellipse(int a1, int b1):Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
    {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
       a = a1;
       b = b1;
    }

    Ellipse(const Ellipse & other):Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
     {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
       this->a = other.a;
       this->b = other.b;
     }
};

#endif // ELLIPSE_H
