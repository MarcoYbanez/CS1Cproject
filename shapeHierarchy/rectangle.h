#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Rectangle : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int l; //length
    int w; //width
public:
    void draw()
    {
        painter.drawRect(x1,y1,l,w);
    }

    void move()
    {

    }

    void perimeter()
    {

    }

    void area()
    {

    }
};

#endif // RECTANGLE_H
