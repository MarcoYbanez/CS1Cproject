#include "idlist.h"
#include "ui_idlist.h"
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
struct Cmp_by_id {
   bool operator()(const T s1, const T s2) const
   { return s1->getShapeId() > s2->getShapeId();}
};


idList::idList(vectorType<Shape*>& v, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::idList)
{
    ui->setupUi(this);

    shapeVector = v;


    int ids[8];
    string type[8];
    double areas[8];
    double perimeters[8];

    QString idsStr[8];
    QString typeStr[8];
    QString areasStr[8];
    QString perimetersStr[8];




   selection_sort(shapeVector.begin(), shapeVector.end(), Cmp_by_id<Shape*>());

   for (int i = 0; i < shapeVector.getSize(); i++)
   {
           perimeters[i] = shapeVector[i]->getPerimeter();
           type[i] = shapeVector[i]->getTextString();
           ids[i] = shapeVector[i]->getShapeId();
           areas[i] = shapeVector[i]->getArea();
   }



    //converting to qstring
    for (int i = 0; i < 8; i++)
    {
       areasStr[i] = QString::number(areas[i]);
       typeStr[i] = QString::fromStdString(type[i]);
       idsStr[i] = QString::number(ids[i]);
       perimetersStr[i] = QString::number(perimeters[i]);

    }

    for (int i = 0; i < 8; i++)
    {
    ui->listWidget->addItem(idsStr[i]);
    ui->listWidget->addItem(typeStr[i]);
    ui->listWidget->addItem(perimetersStr[i]);
    ui->listWidget->addItem(areasStr[i]);
    ui->listWidget->addItem(" ");
    }


}


idList::~idList()
{
    delete ui;
}

