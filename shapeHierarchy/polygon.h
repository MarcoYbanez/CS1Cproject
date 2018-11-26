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
    QPen pGonPen;
    QPainter pGonPainter;

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
        pGonPen.setColor(penColor);
        pGonPen.setWidth(penWidth);
        pGonPen.setStyle(penStyle);
        pGonPen.setCapStyle(capStyle);
        pGonPen.setJoinStyle(joinStyle);
        pGonPainter.setPen(pGonPen);
        x1 = 900;
        y1 = 90;
        x2 = 910;
        y2 = 20;
        x3 = 970;
        y3 = 40;
        x4 = 980;
        y4 = 80;
        //ShapeDimensions: 900, 90, 910, 20, 970, 40, 980, 80
    }
};

#endif // POLYGON_H
