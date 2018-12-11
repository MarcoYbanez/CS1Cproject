#ifndef CIRCLE_H
#define CIRCLE_H
#define PI 3.14159
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
#include <QPointF>
#include <math.h>
class Circle : public Shape
{
private:
    int x;
    int y; //(x1,y1) top left point
    int ax; //semi-major axis
    int bx; //semi-minor axis
    double a;
    double p;
public:
     Circle(): Shape()
    {
      ax = 0;
      bx = 0;
    }

    Circle(int a1, int b1): Shape()
    {
      ax = a1;
      bx = b1;
    }

    Circle(const Circle& other): Shape()
    {
      this->ax = other.ax;
      this->bx = other.bx;
    }

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        ax = a2;
        bx = b2;
        }

    void draw(QPainter &p)
    {
        p.setPen(getPen());
        p.setBrush(getBrush());

        p.drawEllipse(QPointF(x,y),ax, ax );
    }

    void move()
    {

    }

    double getPerimeter()
    {
      double h=0;
      double base1 = (ax-bx), base2 = (ax+bx), power = 2;
      h = pow(base1, power)/pow(base2, power);
      double square = sqrt(4-3*h);
      p = PI*base2*(1+3*h/10+square);
      return p;
    }

    double getArea()
    {
      a = PI * ax * bx;
    return a;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getAx()
    {
        return ax;
    }

    int getBx()
    {
        return bx;
    }

};

#endif // CIRCLE_H
