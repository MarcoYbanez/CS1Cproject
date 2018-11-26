#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <QPoint>
#include <iostream>
#include "shape.h"
using namespace std;

class Rectangle : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int l; //length
    int w; //width
    int p;
    int a;
    QPainter rectPainter;
    QPen rectPen;
public:
    void draw()
    {
        rectPainter.drawRect(x1,y1,l,w);
    }

    void move() //admin only
    {

    }

    void perimeter()
    {
        p = (l*2) + (w*2);
    }

    void area()
    {
        a = (l*w);
    }

    void getData()
     {
         cout << "What is the length of the rectangle? ";
         cin >> l;
         cout << "What is the width of the rectangle? ";
         cin >> w;
     }

    Rectangle():Shape(4,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern)
    {
        rectPen.setColor(penColor);
        rectPen.setWidth(penWidth);
        rectPen.setStyle(penStyle);
        rectPen.setCapStyle(capStyle);
        rectPen.setJoinStyle(joinStyle);
        rectPainter.setPen(rectPen);
        x1 = 20;
        y1 = 200;
        l = 170;
        w = 100;
        a = l*w;
        p = (2*l) + (2*w);
    }

    Rectangle(Rectangle &other):Shape(4,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern)
     {
        rectPen.setColor(penColor);
        rectPen.setWidth(penWidth);
        rectPen.setStyle(penStyle);
        rectPen.setCapStyle(capStyle);
        rectPen.setJoinStyle(joinStyle);
        rectPainter.setPen(rectPen);
         this->l = other.l;
         this->w = other.w;
     }

     Rectangle(int length, int width):Shape(4,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern)
     {
         rectPen.setColor(penColor);
         rectPen.setWidth(penWidth);
         rectPen.setStyle(penStyle);
         rectPen.setCapStyle(capStyle);
         rectPen.setJoinStyle(joinStyle);
         rectPainter.setPen(rectPen);
         l = length;
         w = width;
         a = l*w;
         p = (2*l) + (2*w);
     }


};

#endif // RECTANGLE_H
