#ifndef POLYGON_H
#define POLYGON_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Polygon : public Shape
{
private:
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
public:
    void draw()
    {

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

    Polygon():Shape(3,Qt::cyan,6,Qt::DashDotDotLine,Qt::FlatCap,Qt::MiterJoin,Qt::yellow,Qt::SolidPattern)
    {

    }
};

#endif // POLYGON_H
