#include "addremove.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    addRemove w;
    w.show();

    return a.exec();
}
