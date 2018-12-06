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
    drawWt *n = new drawWt;

    ui->setupUi(this);

    for(int i = 0; i < data::shapeVector.getSize(); i++){
            QString temp(data::shapeVector[i]->getTextString().c_str());
        ui->availableShapesList->addItem(temp);

    }
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
                                                                //once button is clicked... int passes to draw


/*
 * Populate array before this point
 * Confirm order with the vector
 *
 *
    shapeV.parse();
    currentShape = shapeV.getShapeV(7);
    drawWt * draw = new drawWt;
    draw->setShape(currentShape);
    draw->show();
*/
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
