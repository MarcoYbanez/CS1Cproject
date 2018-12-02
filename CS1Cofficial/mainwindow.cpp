#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
#include "login.h"
#include <QPainter>
#include <shape.h>

#include <QtWidgets>
#include "drawwt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    currentShape = new Line;
    drawWt * draw = new drawWt;
    draw->setShape(currentShape);
    draw->show();

}
