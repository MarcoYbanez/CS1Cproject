#ifndef LINE_H
#define LINE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <QPoint>
#include <QWidget>
#include "shape.h"
using namespace std;

class Line : public Shape
{
private:
    int x1;
    int y1;
    int x2;
    int y2;
    //int l; length; perhaps use distance formula?
    QPen linePen;
    QPainter linePainter;
    QBrush lineBrush;
public:
 void draw()
 {
     //to be implemented by alexis
      //painter.setPen(linePen);
      //painter.setBrush(lineBrush);
      //painter.drawLine(x1,y1,x2,y2);
 }

 void move()
 {

 }

 int getPerimeter()
 {
    return -1;
 }

 int getArea()
 {
    return -1;
 }

 QPen getPen()
 {
     return linePen;
 }


 Line():Shape(1,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin)
 {
     linePen.setColor(penColor);
     linePen.setWidth(penWidth);
     linePen.setStyle(penStyle);
     linePen.setCapStyle(capStyle);
     linePen.setJoinStyle(joinStyle);
     painter.setPen(linePen);
     painter.setBrush(lineBrush);
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
     painter.setPen(linePen);
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
     painter.setPen(linePen);
     this->x1 = other.x1;
     this->y1 = other.y1;
     this->x2 = other.x2;
     this->y2 = other.y2;
 }

};

#endif // LINE_H
