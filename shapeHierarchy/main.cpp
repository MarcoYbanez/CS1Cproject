#include "hierarchy.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hierarchy w;
    w.show();

    return a.exec();
}
