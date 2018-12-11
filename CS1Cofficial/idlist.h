#ifndef IDLIST_H
#define IDLIST_H

#include <QWidget>

namespace Ui {
class idList;
}

class idList : public QWidget
{
    Q_OBJECT

public:
    explicit idList(QWidget *parent = nullptr);
    ~idList();

private:
    Ui::idList *ui;
};

#endif // IDLIST_H
