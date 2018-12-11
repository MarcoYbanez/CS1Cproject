#ifndef ADDREMOVE_H
#define ADDREMOVE_H

#include <QWidget>
#include <QAbstractButton>
#include <stdlib.h>
#include <stdio.h>

#include "data.h"
#include "vector.h"
#include "shape.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "shape.h"
#include "text.h"

namespace Ui {
class addRemove;
}

class addRemove : public QWidget
{
    Q_OBJECT

public:
    explicit addRemove(vectorType<Shape*>&, QWidget *parent = nullptr);
    ~addRemove();

private slots:
    void on_Back_clicked();

    void on_radioAdd_clicked();

    void on_radioRemove_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_confirmAdd_accepted();

    void on_confirmAdd_rejected();

    void clearAddInput();

    void on_semiMinorAxis_editingFinished();

    void on_lineY2_editingFinished();

    void on_textWidth_editingFinished();

    void on_rectWidth_editingFinished();

private:
    Shape* shapeInput;
    vectorType<Shape*> shapeVector;
    Ui::addRemove *ui;
};

#endif // ADDREMOVE_H
