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
    int p;
    int a;
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

    int perimeter()
    {
      p = l*4;
      return p;
    }

    int area()
    {
      a = l*l;
     return a;

    }

};

#endif // SQUARE_H
