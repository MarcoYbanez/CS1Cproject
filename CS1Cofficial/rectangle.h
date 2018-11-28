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
    QPen rectPen;
    QBrush rectBrush;
public:
    void draw()
    {
        painter.drawRect(x1,y1,l,w);
    }

    void move() //admin only
    {

    }

    int getPerimeter()
    {
        return p;
    }

    int getArea()
    {
        return a;
    }

    QPen getPen()
    {
        return rectPen;
    }

    QBrush getBrush()
    {
        return rectBrush;
    }

    QRect getRect()
    {
        QRect rect(x1,y1,w,l);
        return rect;
    }

    Rectangle():Shape(4,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern)
    {
        rectPen.setColor(penColor);
        rectPen.setWidth(penWidth);
        rectPen.setStyle(penStyle);
        rectPen.setCapStyle(capStyle);
        rectPen.setJoinStyle(joinStyle);
        painter.setPen(rectPen);
        rectBrush.setColor(brushColor);
        rectBrush.setStyle(brushStyle);
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
        painter.setPen(rectPen);
        rectBrush.setColor(brushColor);
        rectBrush.setStyle(brushStyle);
         this->l = other.l;
         this->w = other.w;
        a = l*w;
        p = (2*l) + (2*w);
     }

     Rectangle(int length, int width):Shape(4,Qt::blue,0,Qt::DashLine,Qt::RoundCap,Qt::RoundJoin,Qt::red,Qt::VerPattern)
     {
         rectPen.setColor(penColor);
         rectPen.setWidth(penWidth);
         rectPen.setStyle(penStyle);
         rectPen.setCapStyle(capStyle);
         rectPen.setJoinStyle(joinStyle);
         painter.setPen(rectPen);
         rectBrush.setColor(brushColor);
         rectBrush.setStyle(brushStyle);
         l = length;
         w = width;
         a = l*w;
         p = (2*l) + (2*w);
     }


};

#endif // RECTANGLE_H
