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

    /* for namespace Qt::___ refer to the following link for documentation - "http://doc.qt.io/qt-5/qt.html"*/

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
    virtual void getData() = 0;
        //*********//
      // Setters //
    //*********//
    // TO BE FILLED void setGlobalColor(string)


    bool operator==(const Shape& shape2)
    {
    return (shapeId == shape2.shapeId);
    }
    bool operator<=(const Shape& shape2)
    {
    return (shapeId <= shape2.shapeId);
    }

    //disable (by marking deleted?):
    Shape(const Shape &);//copy constructor, assignment

};

#endif // SHAPE_H
