#ifndef LINE_H
#define LINE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <QPoint>
#include "shape.h"
using namespace std;

class Line : public Shape
{
private:
    int x1;
    int y1;
    int x2;
    int y2;
    int l;
    int p;
    int a;
    QPainter linePainter;
    QPen linePen;
public:
 void draw()
 {
    linePainter.drawLine(x1,y1,x2,y2);
 }

 void move()
 {

 }

 void perimeter()
 {
    p = 0;
 }

 void area()
 {
    a = 0;
 }

 Line():Shape(1,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin)
 {
     linePen.setColor(penColor);
     linePen.setWidth(penWidth);
     linePen.setStyle(penStyle);
     linePen.setCapStyle(capStyle);
     linePen.setJoinStyle(joinStyle);
     linePainter.setPen(linePen);
     x1 = 20;
     y1 = 90;
     x2 = 100;
     y2 = 20;
 }

 Line(int a1, int b1, int a2, int b2):Shape(1,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin)
 {
     linePen.setColor(penColor);
     linePen.setWidth(penWidth);
     linePen.setStyle(penStyle);
     linePen.setCapStyle(capStyle);
     linePen.setJoinStyle(joinStyle);
     linePainter.setPen(linePen);
      x1 = a1;
      y1 = b1;
      x2 = a2;
      y2 = b2;
 }

 Line(const Line & other):Shape(1,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin)
 {
     linePen.setColor(penColor);
     linePen.setWidth(penWidth);
     linePen.setStyle(penStyle);
     linePen.setCapStyle(capStyle);
     linePen.setJoinStyle(joinStyle);
     linePainter.setPen(linePen);
     this->x1 = other.x1;
     this->y1 = other.y1;
     this->x2 = other.x2;
     this->y2 = other.y2;
 }

};

#endif // LINE_H
