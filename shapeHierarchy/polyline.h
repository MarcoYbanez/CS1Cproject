#ifndef POLYLINE_H
#define POLYLINE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Polyline : public Shape
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

    Polyline():Shape(2,Qt::green,6,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin)
    {

    }
};

#endif // POLYLINE_H
