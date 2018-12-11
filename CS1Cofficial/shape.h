#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include <QBrush>
using std::string;
enum StyleHint { Helvetica, SansSerif = Helvetica, Times, Serif = Times, Courier, TypeWriter = Courier, OldEnglish, Decorative = OldEnglish, System, AnyStyle };
enum  Style { StyleNormal, StyleItalic, StyleOblique };

class Shape
{
private:

    /* for namespace Qt::___ refer to the following link for documentation - "http://doc.qt.io/qt-5/qt.html"*/

    int shapeId;
    string shapeType; // Convert: const QString str = QString::fromStdString(latitude);

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
    string  fontStyle;
    int textFontWeight;

    //
    QPen myPen;
    QBrush myBrush;
public:


    //pure virtual functions:
    virtual void draw(QPainter &p) = 0;
    virtual void move() = 0;
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void setText(string myText){}
    virtual void setCord(int a1,int b1,int a2,int b2) = 0;

    int getShapeId(){
           return shapeId;
    }

    string getTextString(){
        return shapeType;
    }

    Qt::GlobalColor getQPenColor()
    {
        return penColor;
    }

    int getQPenWidth()
    {
        return penWidth;
    }

    Qt::PenStyle getQPenStyle()
    {
        return penStyle;
    }

    Qt::PenCapStyle getQPenCapStyle()
    {
        return capStyle;
    }

    Qt::PenJoinStyle getQPenJoinStyle()
    {
        return joinStyle;
    }

    Qt::GlobalColor getQBrushColor()
    {
        return brushColor;
    }

    Qt::BrushStyle getQBrushStyle()
    {
        return brushStyle;
    }

    string getQTextString()
    {
        return textString;
    }

    Qt::GlobalColor getQTextColor()
    {
        return textColor;
    }

    Qt::AlignmentFlag getQAlignmentFlag()
    {
        return textAlignment;
    }

    int getQTextPointSize()
    {
        return textPointSize;
    }

    string getQTextFontFamily()
    {
        return textFontFamily;
    }

    string getQFontFamily()
    {
        return textFontFamily;
    }

    string getQFontStyle()
    {
        return fontStyle;
    }

    void setShapeType(string ShapeType){
        shapeType = ShapeType;
    }

    //Covert Strings to QColors and QStyles
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
        else if(scolor == "magenta")
                return Qt::magenta;
        else if(scolor == "green")
                return Qt::green;
        else if(scolor == "cyan")
                return Qt::cyan;
        else if(scolor == "yellow")
                return Qt::yellow;
        else if(scolor == "gray")
                return Qt::gray;

    }

    Qt::PenStyle getPenStyle(string thispenStyle)
    {
        if(thispenStyle == "DashDotLine")
            return Qt::DashDotDotLine;
        else if(thispenStyle == "SolidLine")
            return Qt::SolidLine;
        else if(thispenStyle == "DashLine")
            return Qt::DashLine;
        else if(thispenStyle == "DotLine")
            return Qt::DotLine;
        else if(thispenStyle == "DashDotDotLine")
            return Qt::DashDotDotLine;
        else if(thispenStyle == "CustomeDashLine")
            return Qt::CustomDashLine;

    }

    Qt::PenCapStyle getPenCap(string thispenCap)
    {
        if(thispenCap == "FlatCap")
            return Qt::FlatCap;
        else if(thispenCap == "RoundCap")
            return Qt::RoundCap;
        else if(thispenCap == "FlatCap")
            return Qt::FlatCap;
    }

    Qt::PenJoinStyle getPenJoinStyle(string thisJoinStyle)
    {
        if(thisJoinStyle == "MiterJoin")
            return Qt::MiterJoin;
        if(thisJoinStyle == "RoundJoin")
            return Qt::RoundJoin;
        if(thisJoinStyle == "BevelJoin")
            return Qt::BevelJoin;
    }

    Qt::BrushStyle getBrushStyle(string thisBrushStyle)
    {

        if(thisBrushStyle == "VerPattern")
           { return Qt::VerPattern;}
        else if(thisBrushStyle == "Dense1Pattern")
            return Qt::Dense1Pattern;
        else if(thisBrushStyle == "Dense2Pattern")
            return Qt::Dense2Pattern;
        else if(thisBrushStyle == "Dense3Pattern")
            return Qt::Dense3Pattern;
        else if(thisBrushStyle == "Dense4Pattern")
            return Qt::Dense4Pattern;
        else if(thisBrushStyle == "Dense5Pattern")
            return Qt::Dense5Pattern;
        else if(thisBrushStyle == "Dense6Pattern")
            return Qt::Dense6Pattern;
        else if(thisBrushStyle == "Dense7Pattern")
            return Qt::Dense7Pattern;
        else if(thisBrushStyle == "HorPattern")
            return Qt::HorPattern;
        else if(thisBrushStyle == "VerPattern")
            return Qt::VerPattern;
        else if(thisBrushStyle == "CrossPattern")
            return Qt::CrossPattern;
        else if(thisBrushStyle == "BDiagPattern")
            return Qt::BDiagPattern;
        else if(thisBrushStyle == "FDiagPattern")
            return Qt::FDiagPattern;
        else if(thisBrushStyle == "DiagCrossPattern")
            return Qt::DiagCrossPattern;
        else if(thisBrushStyle == "LinearGradientPattern")
            return Qt::LinearGradientPattern;
        else if(thisBrushStyle == "RadialGradientPattern")
            return Qt::RadialGradientPattern;
        else if(thisBrushStyle == "ConicalGradientPattern")
            return Qt::ConicalGradientPattern;
        else if(thisBrushStyle == "SolidPattern")
            return Qt::SolidPattern;
        else if(thisBrushStyle == "NoBrush")
            return Qt::NoBrush;
    }

    Qt::AlignmentFlag getAlignment(string myAlignment)
    {
        if(myAlignment == "AlignCenter")
            return Qt::AlignCenter;
        else if(myAlignment == "AlignLeft")
            return Qt::AlignLeft;
        else if(myAlignment == "AlignRight")
            return Qt::AlignRight;
        else if(myAlignment == "AlignTop")
            return Qt::AlignTop;
        else if(myAlignment == "AlignBottom")
            return Qt::AlignBottom;
    }
    Style turnFontStyle(string myStile)
    {
        if(myStile == "StyleNormal")
            return StyleNormal;
        else if(myStile == "StyleItalic")
            return StyleItalic;
        else if(myStile == "StyleOblique")
            return StyleOblique;
    }
    string getFontFamily()
    {
        return textFontFamily;
    }


//====================================================================
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
    //=====================================
    //Text Functions
    void setAlignment(string myAlignment)
    {
        textAlignment = getAlignment(myAlignment);
    }

    void setPointSize(int myPointSize)
    {
        textPointSize = myPointSize;
    }

    void setFamily(string myFamily)
    {
        textFontFamily = myFamily;
    }

    void setFontStyle(string myFontStyle)
    {
        fontStyle = myFontStyle;

    }

    void stFontWeight(string myFontWeight)
    {
        textFontWeight = stoi(myFontWeight);
    }

    string getFontStyle()
    {
        return fontStyle;
    }
    int getFontSize()
    {
        return textPointSize;
    }
    int getWeight()
    {
        return textFontWeight;
    }

    int getFontWeight()
    {
        return textFontWeight;
    }

    //======================================

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

    virtual ~Shape(){}

};

#endif // SHAPE_H
