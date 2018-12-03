#include "renderarea.h"

#include <QPainter>

#include "shape.h"
#include "line.h"
#include "polyline.h"
#include "rectangle.h"
#include "polygon.h"
#include "ellipse.h"
#include "text.h"

RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    //shape = PolygonE;
    transformed = false;
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(1000, 500);
}

QSize RenderArea::sizeHint() const
{
    return QSize(1000, 500);
}

void RenderArea::setShape(Shapes shape)
{
    this->shape = shape;
    update();
}

void RenderArea::setPen(const QPen &pen)
{
    this->pen = pen;
    update();
}

void RenderArea::setBrush(const QBrush &brush)
{
    this->brush = brush;
    update();
}

void RenderArea::setTransformed(bool transformed)
{
    this->transformed = transformed;
    update();
}


void RenderArea::paintEvent(QPaintEvent * /* event */)
{

    Line renderLine;

    Polyline renderPolyline;

    Polygon renderPolygon;

    Rectangle renderRectangle;

    Ellipse renderEllipse;

    Text renderText;

     QPainter painter(this);

     //hardcoded temp code
                    painter.setPen(renderLine.getPen());
                   painter.setBrush(brush);
                   painter.drawLine(20,90,100,20);

                 painter.setPen(renderPolyline.getPen());
                 painter.drawPolyline(renderPolyline.getPoints(), 4);

                 painter.setPen(renderPolygon.getPen());
                 painter.setBrush(renderPolygon.getBrush());
                 painter.drawPolygon(renderPolygon.getPoints(), 4);

                   painter.setPen(renderRectangle.getPen());
                   painter.setBrush(renderRectangle.getBrush());
                   painter.drawRect(renderRectangle.getRect());

                   painter.setPen(renderEllipse.getPen());
                   painter.setBrush(renderEllipse.getBrush());
                   painter.drawEllipse(520,200,170,100);

                  //needs work
                 //  painter.drawText(renderText.getRect(),renderText.getAlign(),renderText.getString());

//             painter.restore();

}
