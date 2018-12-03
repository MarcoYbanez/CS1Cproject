#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Rectangle : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int l; //length
    int w; //width
public:
    Rectangle()
    {
        l = 0;
        w = 0;
    }
    Rectangle(int length, int width)
    {
        l = length;
        w = width;
    }
    void draw()
    {
        painter.drawRect(x1,y1,l,w);
    }

    void move()
    {

    }

    void perimeter()
    {
      int p;
      p = (2*l) + (2*w);
      cout << "The perimeter is: " << p << endl;
    }

    void area()
    {
      int a;
      a = l*w;
      cout << "The area is: " << a << endl;

    
    }

    void getData()
    {
        cout << "What is the length of the rectangle? ";
        cin >> l;
        cout << "What is the width of the rectangle? "; 
        cin >> w;
    }
    
    Rectangle(Rectangle &other)
    {
        this->l = other.l;
        this->w = other.w;
    }
};

#endif // RECTANGLE_H
