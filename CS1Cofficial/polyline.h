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

    void setCord(int a1,int b1,int a2,int b2){

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
    void draw(QPainter &p)
    {
        //to be implemented
        QVector<QPoint> polyPoints;
        polyPoints << QPoint( x1, y1 ) << QPoint(x2,y2 ) << QPoint( x3,y3 ) << QPoint( x4,y4 );

        p.setPen(getPen());
        p.setBrush(getBrush());
        p.drawPolyline(polyPoints);
    
    }

    void move()
    {

    }

    double getPerimeter()
    {
        return 0;
    }

    double getArea()
    {
        return 0;
    }

  /*  QPen getPen()
    {
        return pLinePen;
    }
*/
    QPoint* getPoints()
    {
        static QPoint points[4] = {
                 QPoint(x1, y1),
                 QPoint(x2, y2),
                 QPoint(x3, y3),
                 QPoint(x4, y4)
             };
        return points;
    }
    /*
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
    */
};

#endif // POLYLINE_H
