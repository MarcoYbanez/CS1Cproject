#ifndef TEXT_H
#define TEXT_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"
using namespace std;

class Text : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int l; //length
    int w; //width
    //dimensions for a textbox-rectangle
    string textString;
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlignment;
    int textPointSize;
    string textFontFamily;
    QFont::Style textFontStyle;
    QFont::Weight textFontWeight;
public:
    void draw()
    {
        //painter.drawText()
    }

    void move() //admin only
    {

    }

    int getPerimeter()
    {
        return (2*l)+(2*w);
    }

    int getArea()
    {
        return (l*w);
    }


    QRect getRect()
    {
        QRect rect(x1,y1,w,l);
        return rect;
    }

    Qt::Alignment getAlign()
    {
        return textAlignment;
    }

    string getString()
    {
        return textString;
    }

    Text():Shape(8)
    {
        x1 = 250;
        y1 = 425;
        l = 500;
        w = 50;
        textString = "Class Project 2 - 2D Graphics Modeler";
        textColor = Qt::blue;
        textAlignment = Qt::AlignCenter;
        textPointSize = 10;
        textFontFamily = "Comic Sans MS";
        textFontStyle = QFont::StyleNormal;
        textFontWeight = QFont::Normal;
    }


};
#endif // TEXT_H
