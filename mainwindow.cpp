#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
#include "login.h"
#include <QPainter>
#include <shape.h>
#include "ellipse.h"
#include "rectangle.h"

#include <QtWidgets>
#include "drawwt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->availableShapesList->addItem("Circle");
    ui->availableShapesList->addItem("Ellipse");
    ui->availableShapesList->addItem("Line");
    ui->availableShapesList->addItem("Polygon");
    ui->availableShapesList->addItem("Polyline");
    ui->availableShapesList->addItem("Rectangle");
    ui->availableShapesList->addItem("Square");
    ui->availableShapesList->addItem("Text");
    ui->availableShapesList->addItem("Custom");

    /*
    logIn *l = new logIn();
    l->show();
    */
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

    int selectedShape = ui->availableShapesList->currentRow();


/*
 * Populate array before this point
 * Confirm order
 *
 *
    shapeV.parse();
    currentShape = shapeV.getShapeV(7);
    drawWt * draw = new drawWt;
    draw->setShape(currentShape);
    draw->show();
*/
}
