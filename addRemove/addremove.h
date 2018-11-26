#ifndef ADDREMOVE_H
#define ADDREMOVE_H

#include <QMainWindow>

namespace Ui {
class addRemove;
}

class addRemove : public QMainWindow
{
    Q_OBJECT

public:
    explicit addRemove(QWidget *parent = nullptr);
    ~addRemove();

private:
    Ui::addRemove *ui;
};

#endif // ADDREMOVE_H
