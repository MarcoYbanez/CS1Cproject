#ifndef CIRCLE_H
#define CIRCLE_H
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
#include <QPointF>
class Circle : public Shape
{
private:
    int x;
    int y; //(x1,y1) top left point
    int a; //semi-major axis
    int b; //semi-minor axis
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

    void perimeter()
    {
      double p=0,h=0;
      double base1 = (a-b), base2 = (a+b), power = 2;
      h = pow(base1, power)/pow(base2, power);
      double square = sqrt(4-3*h);
      p = PI*base2*(1+3*h/10+square);
    //cout no allowed in qt
      //cout << "The perimeter is: " << p << endl;


    }

    void area()
    {
      double area = 0;
      area = PI * a * b;
     // cout << "The area is: " << area << endl;

    }
    void getData()
    {
     // cout << "What is the semi-major axis? ";
        //no cin in qt creates
      //cin >> a;
      //cout << "What is the semi-minor axis? ";
     // cin >> b;
    }
};

#endif // CIRCLE_H
