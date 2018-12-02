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
    // pen color https://doc.qt.io/archives/qtjambi-4.5.2_01/com/trolltech/qt/core/Qt.GlobalColor.html
    int penWidth;
    Qt::PenStyle penStyle;
    // pen style https://doc.qt.io/archives/qtjambi-4.5.2_01/com/trolltech/qt/core/Qt.PenStyle.html
    Qt::PenCapStyle capStyle;
    // pen capy style https://www.bogotobogo.com/Qt/Qt5_QPen_Cap_Style.php
    Qt::PenJoinStyle joinStyle;
    //https://doc.qt.io/archives/3.3/qt.html#PenJoinStyle-enum
    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;
    string textString;
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlignment;
    int textPointSize;
    string textFontFamily;
    QFont::Style textFontStyle;
    QFont::Weight textFontWeight;

    //
    QPen myPen;
public:
    //pure virtual functions:
    virtual void draw(QPainter &p) = 0;
    virtual void move() = 0;
    virtual void perimeter() = 0;
    virtual void area() = 0;
    virtual void getData() = 0;
        //*********//
      // Setters //
    //*********//
    //getFucntions
    QPen getPen()
    {
        return myPen;
    }

    // TO BE FILLED void setGlobalColor(string)
    //temp Shape properties
    Shape()
    {
        //temp values to be able to test drawing widget.
        penColor = Qt::cyan;
        penStyle = Qt::DotLine;
        penWidth = 20;
        capStyle = Qt::RoundCap;
        joinStyle = Qt::BevelJoin;

        brushColor = Qt::white;
        brushStyle = Qt::Dense1Pattern;
        /*
        string textString;
        Qt::GlobalColor textColor;
        Qt::AlignmentFlag textAlignment;
        int textPointSize;
        string textFontFamily;
        QFont::Style textFontStyle;
        QFont::Weight textFontWeight;

        */
        myPen.setColor(penColor);
        myPen.setWidth(penWidth);
        myPen.setStyle(penStyle);
        myPen.setCapStyle(capStyle);
        myPen.setJoinStyle(joinStyle);



    }

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
