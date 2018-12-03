#include "drawwt.h"
#include <QPainter>
#include "line.h"

using namespace std;
drawWt::drawWt(QWidget *parent) : QWidget(parent)
{
}

void drawWt::paintEvent(QPaintEvent * /* event */)
{
    QRect rect(10,10,20,20);
   QPainter painter(this);
   painter.drawRect(rect);

}
