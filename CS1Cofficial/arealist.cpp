#include "arealist.h"
#include "shape.h"
#include "vector.h"
#include "data.h"
#include "circle.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "square.h"
#include "text.h"
#include "ui_arealist.h"

areaList::areaList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::areaList)
{
    ui->setupUi(this);


    double p;
    double a;


    ui->listWidget->addItem("7");
    ui->listWidget->addItem("Circle");
    ui->listWidget->addItem(QString::number(2*PI*200));
    ui->listWidget->addItem(QString::number(PI*(200*200)));

    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("6");
    ui->listWidget->addItem("Ellipse");
    double h = 0;
    double base1 = (170-100), base2 = (170+100), power = 2;
    h = pow(base1, power)/pow(base2, power);
    double square = sqrt(4-3*h);
    p = PI*base2*(1+3*h/10+square);
    ui->listWidget->addItem(QString::number(p));
    ui->listWidget->addItem(QString::number(PI*170*100));



    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("5");
    ui->listWidget->addItem("Sqaure");
    ui->listWidget->addItem(QString::number(200*4));
    ui->listWidget->addItem(QString::number(200*200));


    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("8");
    ui->listWidget->addItem("Text");
    ui->listWidget->addItem(QString::number(500+500+50+50));
    ui->listWidget->addItem(QString::number(500*50));


    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("4");
    ui->listWidget->addItem("Rectangle");
    p = 170+170+100+100;
    ui->listWidget->addItem(QString::number(p));
     ui->listWidget->addItem(QString::number(170*100));

     ui->listWidget->addItem(" ");
    ui->listWidget->addItem("3");
    ui->listWidget->addItem("Polygon");
     p = sqrt(pow((910-900),2) + pow((20-90),2)) + sqrt(pow((970-910),2) + pow((40-20),2)) + sqrt(pow((980-970),2) + pow((80-40),2)) +
            sqrt(pow((980-900),2) + pow((80-90),2));
    ui->listWidget->addItem(QString::number(p));
    a= 0.5*((900*20 - 910*90) + (910*40 - 970*20) + (970*80 - 980*40) + (980*90 - 900*80));
    ui->listWidget->addItem(QString::number(a));
}

areaList::~areaList()
{
    delete ui;
}
