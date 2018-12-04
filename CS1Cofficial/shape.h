#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <QBrush>
using std::string;

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
    QBrush myBrush;
public:
    //pure virtual functions:
    virtual void draw(QPainter &p) = 0;
    virtual void move() = 0;
    virtual void perimeter() = 0;
    virtual void area() = 0;
    virtual void getData() = 0;
        //*********//
      // Setters //
    virtual void setCord(int a1,int b1,int a2,int b2) = 0;
    Qt::GlobalColor myColor(string scolor)
    {
        if(scolor == "blue")
            return Qt::blue;
        else if(scolor == "red")
            return Qt::red;
        else if(scolor == "white")
            return Qt::white;
        else if(scolor== "black")
            return Qt::black;

    }

    Qt::PenStyle getPenStyle(string thispenStyle)
    {
        if(thispenStyle == "DashDotLine")
            return Qt::DashDotDotLine;
        else if(thispenStyle == "SolidLine")
            return Qt::SolidLine;
        else if(thispenStyle == "DashLine")
            return Qt::DashLine;
    }

    Qt::PenCapStyle getPenCap(string thispenCap)
    {
        if(thispenCap == "FlatCap")
            return Qt::FlatCap;
        else if(thispenCap == "RoundCap")
            return Qt::RoundCap;
    }

    Qt::PenJoinStyle getPenJoinStyle(string thisJoinStyle)
    {
        if(thisJoinStyle == "MiterJoin")
            return Qt::MiterJoin;
        if(thisJoinStyle == "RoundJoin")
            return Qt::RoundJoin;
    }
    Qt::BrushStyle getBrushStyle(string thisBrushStyle)
    {
        if(thisBrushStyle == "VerPattern")
            return Qt::VerPattern;
        else if(thisBrushStyle == "HorPattern")
            return Qt::HorPattern;
    }

    void setBrushColor(string thisBrushColor)
    {
        brushColor = myColor(thisBrushColor);
        myBrush.setColor(brushColor);
    }
    void setBrushStyle(string thisBrushStyle)
    {
        brushStyle = getBrushStyle(thisBrushStyle);
        myBrush.setStyle(brushStyle);
    }

    void setJoinStyle(string thisJoinStyle)
    {
        joinStyle = getPenJoinStyle(thisJoinStyle);
        myPen.setJoinStyle(joinStyle);
    }

    void setPenStyle(string thispenStyle)
    {
        penStyle = getPenStyle(thispenStyle);
        myPen.setStyle(penStyle);
    }
    void setCapStyle(string thispenCap)
    {
        capStyle = getPenCap(thispenCap);
        myPen.setCapStyle(capStyle);
    }
    void setID(int d)
    {
        shapeId = d;
    }
    void setColor(string color)
    {

       penColor = myColor(color);
        myPen.setColor(penColor);
    }
    void setWidth(int d)
    {
        penWidth = d;
        myPen.setWidth(penWidth);
    }
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
        penColor = Qt::red;
        penStyle = Qt::DotLine;
        penWidth = 3;
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

        //set brush
        setBrush();



    }

    QBrush getBrush()
    {
        return myBrush;
    }

    void setBrush()
    {
        myBrush.setColor(brushColor);
        myBrush.setStyle(brushStyle);
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
