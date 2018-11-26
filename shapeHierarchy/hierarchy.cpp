#include "hierarchy.h"
#include "ui_hierarchy.h"
#include "shape.h"
Hierarchy::Hierarchy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hierarchy)
{
    ui->setupUi(this);
}

Hierarchy::~Hierarchy()
{
    delete ui;
}

void Hierarchy::on_pushButton_clicked()
{

}

void Hierarchy::on_pushButton_2_clicked()
{

}
