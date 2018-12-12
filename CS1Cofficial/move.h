#ifndef MOVE_H
#define MOVE_H

#include <QWidget>
#include "shape.h"

namespace Ui {
class Move;
}

class Move : public QWidget
{
    Q_OBJECT

public:
    explicit Move(QWidget *parent = 0);

    Move(Shape* s, QWidget *parent = 0);

    ~Move();


private slots:

    void on_confirmMove_accepted();

    void on_confirmMove_rejected();

    void clearMoveInput();

    void on_semiMinorAxis_editingFinished();


private:
    Ui::Move *ui;

    Shape* shapeInput;

    int newX;
    int newY;
};

#endif // MOVE_H
