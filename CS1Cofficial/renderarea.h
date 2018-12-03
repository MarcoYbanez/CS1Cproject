#ifndef RENDERAREA_H
#define RENDERAREA_H
#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    enum Shapes {LineE, PolylineE, RectangleE, EllipseE, PolygonE, TextE};

    RenderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;
public slots:
    void setShape(Shapes shape);
    void setPen(const QPen &pen);
    void setBrush(const QBrush &brush);
    void setTransformed(bool transformed);
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
    Shapes shape;
    QPen pen;
    QBrush brush;
    bool transformed;

    //transformation
    void drawCoordinates(QPainter &painter);
    void drawOutline(QPainter &painter);
    void drawShape(QPainter &painter);
    void transformPainter(QPainter &painter);
    //QList<Operation> operations;
    QPainterPath shapePath;
    QRect xBoundingRect;
    QRect yBoundingRect;
};











#endif // RENDERAREA_H
