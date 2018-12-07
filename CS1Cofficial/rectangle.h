#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"


class Rectangle : public Shape
{
private:
    int x;
    int y; //(x1,y1) top left point
    int l; //length
    int w; //width
    double p;
    double a;
public:
    Rectangle() : Shape()
    {
        l = 0;
        w = 0;
    }
    Rectangle(int length, int width) : Shape()
    {
        l = length;
        w = width;
    }

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        l = a2;
        w = b2;
    }
    void draw(QPainter &p)
    {
        p.setPen(getPen());
        p.setBrush(getBrush());
        QRect rect = QRect(x, y, l, w);
        p.drawRect(rect);

    }

    void move()
    {

    }

    double getPerimeter()
    {
      p = (2*l) + (2*w);
      return p;
    }

    double getArea()
    {
      a = l*w;
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

    int getW()
    {
        return w;
    }

    
    Rectangle(Rectangle &other) : Shape()
    {
        this->l = other.l;
        this->w = other.w;
    }
};

#endif // RECTANGLE_H
