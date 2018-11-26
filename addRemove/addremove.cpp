#include "addremove.h"
#include "ui_addremove.h"

addRemove::addRemove(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addRemove)
{
    ui->setupUi(this);
}

addRemove::~addRemove()
{
    delete ui;
}
