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
    int a; //semi-major axis
    int b; //semi-minor axis
    int area;
    int p;
public:
     Circle(): Shape()
    {
      a = 0;
      b = 0;
    }

    Circle(int a1, int b1): Shape()
    {
      a = a1;
      b = b1;
    }

    Circle(const Circle& other): Shape()
    {
      this->a = other.a;
      this->b = other.b;
    }

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        a = a2;
        //b = b2;
        }

    void draw(QPainter &p)
    {
        p.setPen(getPen());
        p.setBrush(getBrush());

        p.drawEllipse(QPointF(x,y),a, a );
    }

    void move()
    {

    }

    int getPerimeter()
    {
      double h=0;
      double base1 = (a-b), base2 = (a+b), power = 2;
      h = pow(base1, power)/pow(base2, power);
      double square = sqrt(4-3*h);
      p = PI*base2*(1+3*h/10+square);
   return p;
    }

    int getArea()
    {
      area = PI * a * b;
    return area;

    }
};

#endif // CIRCLE_H
