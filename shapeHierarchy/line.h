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
public:
 void draw()
 {
    painter.drawLine(x1,y1,x2,y2);
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

 Line():Shape(1,Qt::blue,2,Qt::DashDotLine,Qt::FlatCap,Qt::MiterJoin)
 {
     x1 = 20;
     y1 = 90;
     x2 = 100;
     y2 = 20;
 }

};

#endif // LINE_H
