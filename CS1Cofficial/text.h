#ifndef TEXT_H
#define TEXT_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
#include "string.h"
using std::string;


class Text : public Shape
{
private:
    int x;
    int y; //(x1,y1) top left point
    int l; //length
    int w; //width
    double p;
    double a;
    string text;
    //dimensions for a textbox-rectangle
public:
    Text(): Shape()
    {
    }

     ~Text(){}

    void setCord(int a1,int b1,int a2,int b2)
    {
        x = a1;
        y = b1;
        l = a2;
        w = b2;
    }
    void setText(string myText) override
    {
        text = myText;
    }
    void draw(QPainter &p)
    {
        QFont thisFont;
        thisFont.setPointSize(getFontSize());
        thisFont.setFamily(QString::fromStdString(getFontFamily()));
        thisFont.setWeight(getWeight());
        p.setFont(thisFont);
        p.drawText(QPoint(x,y),QString::fromStdString(text));
    }

    void move()
    {

    }

    double getPerimeter()
    {
      p = (2*l) + (2*w);
      return p;
    }

    double getArea()
    {
        a=l*w;
        return a;
    }

    string getText()
    {
        return text;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getL()
    {
        return l;
    }

    int getW()
    {
        return w;
    }
};


#endif // TEXT_H
