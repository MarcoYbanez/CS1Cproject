#ifndef ELLIPSE_H
#define ELLIPSE_H
#define PI 3.14159
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <iostream>
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
    QBrush ellBrush;
public:
    void draw()
    {
       painter.drawEllipse(x1,y1,a,b);
    }

    void move()
    {

    }

    int getPerimeter()
    {
        return p;
    }

    int getArea()
    {
        return ar;
    }

    QPen getPen()
    {
        return ellPen;
    }

    QBrush getBrush()
    {
        return ellBrush;
    }

    Ellipse():Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
    {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
        ellBrush.setColor(brushColor);
        ellBrush.setStyle(brushStyle);
        x1 = 520;
        y1 = 200;
        a = 170;
        b = 100;
        ar = PI * a * b;
        double base1 = (a-b), base2 = (a+b), power = 2;
        h = pow(base1, power)/pow(base2, power);
        double square = sqrt(4-3*h);
        p = PI*base2*(1+3*h/10+square);
    }

    Ellipse(int a1, int b1):Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
    {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
        ellBrush.setColor(brushColor);
        ellBrush.setStyle(brushStyle);
       a = a1;
       b = b1;
       ar = PI * a * b;
       double base1 = (a-b), base2 = (a+b), power = 2;
       h = pow(base1, power)/pow(base2, power);
       double square = sqrt(4-3*h);
       p = PI*base2*(1+3*h/10+square);
    }

    Ellipse(const Ellipse & other):Shape(6,Qt::black,12,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin,Qt::white,Qt::NoBrush)
     {
        ellPen.setColor(penColor);
        ellPen.setWidth(penWidth);
        ellPen.setStyle(penStyle);
        ellPen.setCapStyle(capStyle);
        ellPen.setJoinStyle(joinStyle);
        painter.setPen(ellPen);
        ellBrush.setColor(brushColor);
        ellBrush.setStyle(brushStyle);
       this->a = other.a;
       this->b = other.b;
        ar = PI * a * b;
        double base1 = (a-b), base2 = (a+b), power = 2;
        h = pow(base1, power)/pow(base2, power);
        double square = sqrt(4-3*h);
        p = PI*base2*(1+3*h/10+square);
     }

    void getData()
    {
      cout << "What is the semi-major axis? ";
      cin >> a;
      cout << "What is the semi-minor axis? ";
      cin >> b;
    }
};



#endif // ELLIPSE_H
