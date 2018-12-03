#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
<<<<<<< HEAD
=======
#include "login.h"
#include <QPainter>
#include <shape.h>
#include "ellipse.h"
#include "rectangle.h"

#include <QtWidgets>
#include "drawwt.h"
>>>>>>> dbe7fe2542f2e4cbc795787ccce6af181173145f

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
    contact *c = new contact();
    c->show();
=======
    /*
    logIn *l = new logIn();
    l->show();
    */
>>>>>>> dbe7fe2542f2e4cbc795787ccce6af181173145f
}

MainWindow::~MainWindow()
{
    delete ui;
    delete currentShape;
}

void MainWindow::on_contactUs_btn_clicked()
{
    contact *c = new contact();
    c->show();
}

void MainWindow::on_draw_btn_clicked()
{
    /*
     *Main window can hold our vector, we can then pass to current shape pointer the shape we want to display.
     *
     */
    //test for line.
    //currentShape = new Line;
    //test for ellipse.
    currentShape = new Ellipse;
    //test for rectangle
    //currentShape = new Rectangle;

    drawWt * draw = new drawWt;
    draw->setShape(currentShape);
    draw->show();

}
