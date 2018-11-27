#include "cs1cofficial.h"
#include "ui_cs1cofficial.h"

CS1cofficial::CS1cofficial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CS1cofficial)
{
    ui->setupUi(this);
}

CS1cofficial::~CS1cofficial()
{
    delete ui;
}
