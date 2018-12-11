#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
#include "login.h"
#include <QPainter>
#include <shape.h>
#include "ellipse.h"
#include "rectangle.h"
#include "addremove.h"
#include "data.h"


#include <QtWidgets>
#include "drawwt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < data::shapeVector.getSize(); i++){
            QString temp(data::shapeVector[i]->getTextString().c_str());
        ui->availableShapesList->addItem(temp);

    }

    Ellipse *e = new Ellipse;
    ui->canvas->setShape(e);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_contactUs_btn_clicked()
{
    contact *c = new contact();
    c->show();
}

void MainWindow::on_draw_btn_clicked()
{

    int selectedShape = ui->availableShapesList->currentRow();  //returns int for the value that user selects
    //Erase after complete testing                                                             //once button is clicked... int passes to draw
    Line * l = new Line;
   // Rectangle *l = new Rectangle;
    //============
    //pass shape pointer to setShape to call the draw function of the shape.

    ui->canvas->setShape(l);
    ui->canvas->update();
}

void MainWindow::on_login_btn_clicked()
{
    logIn *l = new logIn;
    l->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    addRemove* add = new addRemove;
    add->show();
}

void MainWindow::on_move_btn_clicked()
{

}
