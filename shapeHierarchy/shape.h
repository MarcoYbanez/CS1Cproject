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
protected:
    Qt::GlobalColor penColor;
    int penWidth;
    Qt::PenStyle penStyle;
    Qt::PenCapStyle capStyle;
    Qt::PenJoinStyle joinStyle;
    Qt::GlobalColor brushColor;
    Qt::BrushStyle brushStyle;
    QPainter painter;
public:

    //constructor
    Shape(int id)
    {
        shapeId = id;
    }

    Shape(int id, Qt::GlobalColor penC, int penW, Qt::PenStyle penS, Qt::PenCapStyle capS, Qt::PenJoinStyle joinS)
    {
        shapeId = id;
        penColor = penC;
        penWidth = penW;
        penStyle = penS;
        capStyle = capS;
        joinStyle = joinS;

    }

    Shape(int id, Qt::GlobalColor penC, int penW, Qt::PenStyle penS, Qt::PenCapStyle capS, Qt::PenJoinStyle joinS,
          Qt::GlobalColor brushC, Qt::BrushStyle brushS)
    {
        shapeId = id;
        penColor = penC;
        penWidth = penW;
        penStyle = penS;
        capStyle = capS;
        joinStyle = joinS;
        brushColor = brushC;
        brushStyle = brushS;

    }

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
