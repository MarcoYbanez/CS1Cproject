#ifndef HIERARCHY_H
#define HIERARCHY_H

#include <QMainWindow>

namespace Ui {
class Hierarchy;
}

class Hierarchy : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hierarchy(QWidget *parent = nullptr);
    ~Hierarchy();

private:
    Ui::Hierarchy *ui;
};

#endif // HIERARCHY_H
