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

    void perimeter()
    {
      int p;
      p = 1*4;
      //cout << "The perimeter is: " << p << endl;
    }

    void area()
    {
      int a;
      a = l*l;
     // cout << "The area is: " << a << endl;


    }

    void getData()
    {
        //cout << "What is the length of the rectangle? ";
        //cin >> l;
        //cout << "What is the width of the rectangle? ";
        //cin >> w;
    }
};

#endif // SQUARE_H
