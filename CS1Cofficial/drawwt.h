#ifndef DRAWWT_H
#define DRAWWT_H

#include <QWidget>
#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>
#include "line.h"
#include "shape.h"

class drawWt : public QWidget
{

    Q_OBJECT

public:
    explicit drawWt(QWidget *parent = nullptr);
    void setShape(Shape * currentShape);

   signals:
protected:
    void paintEvent(QPaintEvent *);


public slots:
private:
    Shape *shape;
    QPen pen;
    QBrush brush;
    bool antialiased;
    bool transformed;
    QPixmap pixmap;
};

#endif // DRAWWT_H
