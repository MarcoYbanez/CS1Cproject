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
    QPen pLinePen;
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

    QPen getPen()
    {
        return pLinePen;
    }

    Polyline():Shape(2,Qt::green,6,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin)
    {
        pLinePen.setColor(penColor);
        pLinePen.setWidth(penWidth);
        pLinePen.setStyle(penStyle);
        pLinePen.setCapStyle(capStyle);
        pLinePen.setJoinStyle(joinStyle);
        painter.setPen(pLinePen);
        x1 = 460;
        y1 = 90;
        x2 = 470;
        y2 = 20;
        x3 = 530;
        y3 = 40;
        x4 = 540;
        y4 = 80;
        //ShapeDimensions: 460, 90, 470, 20, 530, 40, 540, 80
    }
};

#endif // POLYLINE_H
