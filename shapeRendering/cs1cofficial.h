#ifndef CS1COFFICIAL_H
#define CS1COFFICIAL_H

#include <QMainWindow>

namespace Ui {
class CS1cofficial;
}

class CS1cofficial : public QMainWindow
{
    Q_OBJECT

public:
    explicit CS1cofficial(QWidget *parent = nullptr);
    ~CS1cofficial();

private:
    Ui::CS1cofficial *ui;
};

#endif // CS1COFFICIAL_H
