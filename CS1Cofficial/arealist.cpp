#include "arealist.h"
#include "shape.h"
#include "vector.h"
#include "circle.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "square.h"
#include "text.h"
#include "ui_arealist.h"

template <typename T>
struct Cmp_by_area {
   bool operator()(const T s1, const T s2) const
   { return s1->getArea() > s2->getArea(); }
};


areaList::areaList(vectorType<Shape*>& v, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::areaList)
{
    ui->setupUi(this);


    shapeVector = v;

    int idsA[8];
    string typeA[8];
    double areasA[8];
    double perimetersA[8];

    QString idsAStr[8];
    QString typeAStr[8];
    QString areasAStr[8];
    QString perimetersAStr[8];
    QStringList ids;
    QString str = "Shape";

    selection_sort(shapeVector.begin(), shapeVector.end(), Cmp_by_area<Shape*>());

    for (int i = 0; i < shapeVector.getSize(); i++)
    {
            areasA[i] = shapeVector[i]->getArea();
            typeA[i] = shapeVector[i]->getTextString();
            idsA[i] = shapeVector[i]->getShapeId();
            perimetersA[i] = shapeVector[i]->getPerimeter();
    }

    //converting to qstring
    for (int i = 0; i < 8; i++)
    {
       idsAStr[i] = QString::number(idsA[i]);
       typeAStr[i] = QString::fromStdString(typeA[i]);
       areasAStr[i] = QString::number(areasA[i]);
       perimetersAStr[i] = QString::number(perimetersA[i]);

    }

    for (int i = 0; i < 8; i++)
    {
    ui->listWidget->addItem(idsAStr[i]);
    ui->listWidget->addItem(typeAStr[i]);
    ui->listWidget->addItem(areasAStr[i]);
    ui->listWidget->addItem(perimetersAStr[i]);
    ui->listWidget->addItem(" ");
    }



    /*
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
    */
}

areaList::~areaList()
{
    delete ui;
}
