
#ifndef ELLIPSE_H
#define ELLIPSE_H
#define PI 3.14159

#include <string>
#include <math.h>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
;
//ellipse
//ellispe
class Ellipse : public Shape
{
private:
    int x;
    int y; //(x1,y1) top left point
    int a; //semi-major axis
    int b; //semi-minor axis
    int area;
    int p;
public:
    Ellipse(): Shape()
    {
      a = 0;
      b = 0;
    }
    
    Ellipse(int a1, int b1): Shape()
    {
      a = a1;
      b = b1;
    }

    Ellipse(const Ellipse & other): Shape()
    {
      this->a = other.a;
      this->b = other.b;
    }
    
    void draw(QPainter &p)
    {

        p.setPen(getPen());
        p.setBrush(getBrush());

        p.drawEllipse( QRect( 110, 10, 80, 80 ) );
    }

    void move()
    {

    }

    int getPerimeter()
    {
      double h = 0;
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

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        a = a2;
        b = b2;
    }

};



#endif // ELLIPSE_H
