#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
using namespace std;

class Shape
{
private:
    int shapeId;
    Qt::GlobalColor penColor;
    int penWidth;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle capStyle;
    Qt::PenJoinStyle joinStyle;
    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;
    string textString;
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlignment;
    int textPointSize;
    string textFontFamily;
    QFont::Style textFontStyle;
    QFont::Weight textFontWeight;
public:
    QPainter painter;  //used to draw functions, currently public

    //pure virtual functions:
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual void perimeter() = 0;
    virtual void area() = 0;

    bool operator==(const Shape& shape2)
    {
        return (shapeId == shape2.shapeId);
    }
    bool operator<=(const Shape& shape2)
    {
        return (shapeId <= shape2.shapeId);
    }

    //disable (by marking deleted?):
    //copy constructor, assignment

};


#endif // SHAPE_H
