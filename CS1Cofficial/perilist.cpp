#include "perilist.h"
#include "ui_perilist.h"
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
#include <math.h>
#include <iterator>
#include <stdlib.h>

template <typename T>
struct Cmp_by_perimeter {
   bool operator()(const T s1, const T s2) const
   { return s1->getPerimeter() > s2->getPerimeter(); }
};



periList::periList(vectorType<Shape*>& v, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::periList)
{
    ui->setupUi(this);

    shapeVector = v;


    int idsP[8];
    string typeP[8];
    double areasP[8];
    double perimetersP[8];

    QString idsPStr[8];
    QString typePStr[8];
    QString areasPStr[8];
    QString perimetersPStr[8];




   selection_sort(shapeVector.begin(), shapeVector.end(), Cmp_by_perimeter<Shape*>());

   for (int i = 0; i < shapeVector.getSize(); i++)
   {
           perimetersP[i] = shapeVector[i]->getPerimeter();
           typeP[i] = shapeVector[i]->getTextString();
           idsP[i] = shapeVector[i]->getShapeId();
           areasP[i] = shapeVector[i]->getArea();
   }



    //converting to qstring
    for (int i = 0; i < 8; i++)
    {
       areasPStr[i] = QString::number(areasP[i]);
       typePStr[i] = QString::fromStdString(typeP[i]);
       idsPStr[i] = QString::number(idsP[i]);
       perimetersPStr[i] = QString::number(perimetersP[i]);

    }

    for (int i = 0; i < 8; i++)
    {
    ui->listWidget->addItem(idsPStr[i]);
    ui->listWidget->addItem(typePStr[i]);
    ui->listWidget->addItem(perimetersPStr[i]);
    ui->listWidget->addItem(areasPStr[i]);
    ui->listWidget->addItem(" ");
    }


}


periList::~periList()
{
    delete ui;
}

