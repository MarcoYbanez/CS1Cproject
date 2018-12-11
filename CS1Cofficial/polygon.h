#ifndef POLYGON_H
#define POLYGON_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <math.h>
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
    double p;
    double a;
    QPen pGonPen;
    QBrush pGonBrush;

public:
    void draw(QPainter& p)
    {
        //to be implemented
    }

    void setCord(int a1,int b1,int a2,int b2, int a3,int b3,int a4,int b4){
        x1 = a1;
        y1 = b2;
        x2 = a2;
        y2 = b2;
        x3 = a3;
        y3 = b3;
        x4 = a4;
        y4 = b4;

    }
     void setCord(int a1,int b1,int a2,int b2){

     }

    void move()
    {

    }

    double getPerimeter()
    {
        p = sqrt(pow((x2-x1),2) + pow((y2-y1),2)) + sqrt(pow((x3-x2),2) + pow((y3-y2),2)) + sqrt(pow((x4-x3),2) + pow((y4-y3),2)) +
                sqrt(pow((x4-x1),2) + pow((y4-y1),2));
        return p;
    }

    double getArea()
    {
        a= 0.5*((x1*y2 - x2*y1) + (x2*y3 - x3*y2) + (x3*y4 - x4*y3) + (x4*y1 - x1*y4));
        return a;
    }

    QPen getPen()
    {
        return pGonPen;
    }

    QBrush getBrush()
    {
        return pGonBrush;
    }

    QPoint* getPoints()
    {
        static   QPoint points[4] = {
                 QPoint(x1, y1),
                 QPoint(x2, y2),
                 QPoint(x3, y3),
                 QPoint(x4, y4)
             };
        return points;
    }
    /*
    Polygon():Shape(3,Qt::cyan,6,Qt::DashDotDotLine,Qt::FlatCap,Qt::MiterJoin,Qt::yellow,Qt::SolidPattern)
    {
        pGonPen.setColor(penColor);
        pGonPen.setWidth(penWidth);
        pGonPen.setStyle(penStyle);
        pGonPen.setCapStyle(capStyle);
        pGonPen.setJoinStyle(joinStyle);
        painter.setPen(pGonPen);
        pGonBrush.setColor(brushColor);
        pGonBrush.setStyle(brushStyle);
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
    */
};

#endif // POLYGON_H
