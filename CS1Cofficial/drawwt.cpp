#include "drawwt.h"
#include <QPainter>
#include "line.h"

drawWt::drawWt(QWidget *parent) : QWidget(parent)
{
}

void drawWt::paintEvent(QPaintEvent * /* event */)
{
    QPainter p(this);
 p.drawRect(10,10,100,100);
  //  shape->draw(p);
}


void drawWt::setShape(Shape * currentShape)
{
    shape = currentShape;
}
