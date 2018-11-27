#include "renderarea.h"

#include <QPainter>

#include "shape.h"
#include "line.h"
#include "polyline.h"
#include "rectangle.h"
#include "polygon.h"
#include "ellipse.h"
#include "text.h"

//! [0]
RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    shape = PolygonE;
    antialiased = false;
    transformed = false;
    pixmap.load(":/images/qt-logo.png");

    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}
//! [0]

//! [1]
QSize RenderArea::minimumSizeHint() const
{
    return QSize(1000, 500);
}
//! [1]

//! [2]
QSize RenderArea::sizeHint() const
{
    return QSize(1000, 500);
}
//! [2]

//! [3]
void RenderArea::setShape(Shapes shape)
{
    this->shape = shape;
    update();
}
//! [3]

//! [4]
void RenderArea::setPen(const QPen &pen)
{
    this->pen = pen;
    update();
}
//! [4]

//! [5]
void RenderArea::setBrush(const QBrush &brush)
{
    this->brush = brush;
    update();
}
//! [5]

//! [6]
void RenderArea::setAntialiased(bool antialiased)
{
    this->antialiased = antialiased;
    update();
}
//! [6]

//! [7]
void RenderArea::setTransformed(bool transformed)
{
    this->transformed = transformed;
    update();
}
//! [7]

//! [8]
void RenderArea::paintEvent(QPaintEvent * /* event */)
{

    Line renderLine;

  //  renderLine.set_points(QPoint(20, 90), QPoint(100, 20));

  //  renderLine.set_pen(Qt::blue, 2, Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin);

    renderLine.draw();

 //   line.default_style();
 //   line.draw_rect(width() - 1, height() - 1);

    Polyline renderPolyline;
/*
    renderPolyline.set_point(QPoint(460, 90));
    renderPolyline.set_point(QPoint(470, 20));
    renderPolyline.set_point(QPoint(530, 40));
    renderPolyline.set_point(QPoint(540, 80));

    renderPolyline.set_pen(Qt::green, 6, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
*/

 /*   renderPolyline.draw();

    renderPolyline.default_style();
    renderPolyline.draw_rect(width() - 1, height() - 1);
*/
    Polygon renderPolygon;
/*
    renderPolygon.set_point(QPoint(900, 90));
    renderPolygon.set_point(QPoint(910, 20));
    renderPolygon.set_point(QPoint(970, 40));
    renderPolygon.set_point(QPoint(980, 80));

    renderPolygon.set_pen(Qt::cyan, 6, Qt::DashDotDotLine, Qt::FlatCap, Qt::MiterJoin);
    renderPolygon.set_brush(Qt::yellow, Qt::SolidPattern);
*/
    renderPolygon.draw();
/*
    renderPolygon.default_style();
    renderPolygon.draw_rect(width() - 1, height() - 1);
*/
    Rectangle renderRectangle;

//    renderRectangle.set_rect(QRect(20, 200, 170, 100));

 //   renderRectangle.set_pen(Qt::blue, 0, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin);
  //  renderRectangle.set_brush(Qt::red, Qt::VerPattern);

    renderRectangle.draw();

//    renderRectangle.default_style();
//    renderRectangle.draw_rect(width() - 1, height() - 1);

    Ellipse renderEllipse = Ellipse();

//    renderEllipse.set_rect(QRect(520, 200, 170, 100));

//    renderEllipse.set_pen(Qt::black, 12, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin);
//    renderEllipse.set_brush(Qt::white, Qt::NoBrush);

    renderEllipse.draw();

 //   renderEllipse.default_style();
  //  renderEllipse.draw_rect(width() - 1, height() - 1);

    Text renderText;

  //  renderText.set_rect(QRect(250, 425, 500, 50));

    renderText.draw();

 //   renderText.default_style();
//    renderText.draw_rect(width() - 1, height() - 1);





//     static const QPoint points[4] = {
//         QPoint(10, 80),
//         QPoint(20, 10),
//         QPoint(80, 30),
//         QPoint(90, 70)
//     };

     QRect rect(20, 200, 100, 170);

//     QPainterPath path;
//     path.moveTo(20, 80);
//     path.lineTo(20, 30);
//     path.cubicTo(80, 0, 50, 50, 80, 80);

//     int startAngle = 20 * 16;
//     int arcLength = 120 * 16;
// //! [8]

// //! [9]
     QPainter painter(this);
     painter.setPen(renderLine.getPen());
     painter.setBrush(brush);
// //! [9]

// //! [12]
                   painter.drawLine(20,90,100,20);

//                 painter.drawPolyline(points, 4);

//                 painter.drawPolygon(points, 4);

                   painter.setPen(renderRectangle.getPen());
                   painter.drawRect(rect);

  //                 painter.drawEllipse(rect);

    //               painter.drawText(rect,Qt::AlignCenter,tr("Qt by\nThe Qt Company"));

// //! [12] //! [13]
//             painter.restore();
//         }
//     }


}
//! [13]
