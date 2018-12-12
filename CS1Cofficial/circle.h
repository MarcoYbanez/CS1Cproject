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

    void move(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    double getPerimeter()
    {
      p = 2 * PI * ax;
      return p;
    }

    double getArea()
    {
      a = PI * ax*ax;
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
