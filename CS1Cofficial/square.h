#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"

class Square :public Shape
{
private:
    int x;
    int y;
    int l;
    double p;
    double a;
public:
    Square() : Shape()
    {
        l = 0;
    }

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        l = a2;
        b2 = 0;
    }
    void draw(QPainter &p)
    {
        QRect rect = QRect(x, y, l, l);
        p.setPen(getPen());
        p.setBrush(getBrush());

        p.drawRect(rect);

    }

    void move()
    {

    }

    double getPerimeter()
    {
      p = l*4;
      return p;
    }

    double getArea()
    {
      a = l*l;
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

    int getL()
    {
        return l;
    }

};

#endif // SQUARE_H
