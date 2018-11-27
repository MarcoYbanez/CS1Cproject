#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    contact *c = new contact();
    c->show();
    logIn *l = new logIn();
    l->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
