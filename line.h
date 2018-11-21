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
 Line()
 {
     x1 = 0;
     y1 = 0;
     x2 = 0;
     y2 = 0;
 }

Line(int a1, int b1, int a2, int b2)
{
    x1 = a1;
    b1 = y1;
    x2 = a2;
    y2 = b2;
}
Line(const Line & other)
{
    this->x1 = other.x1;
    this->y1 = other.y1;
    this->x2 = other.x2;
    this->y2 = other.y2;
}
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

};

#endif // LINE_H
