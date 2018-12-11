#include "idlist.h"
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
#include "ui_idlist.h"

idList::idList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::idList)
{
    ui->setupUi(this);

   ui->listWidget->addItem("1");
   ui->listWidget->addItem("Line");
   ui->listWidget->addItem("20, 90, 100, 20");
   ui->listWidget->addItem("blue");
   ui->listWidget->addItem("2");
   ui->listWidget->addItem("DashDotLine");
   ui->listWidget->addItem("FlatCap");
   ui->listWidget->addItem("MiterJoin");

   ui->listWidget->addItem(" ");
   ui->listWidget->addItem("2");
   ui->listWidget->addItem("Polyline");
   ui->listWidget->addItem("460,90,470,20,530,40,540,80");
   ui->listWidget->addItem("green");
   ui->listWidget->addItem("6");
   ui->listWidget->addItem("SolidLine");
   ui->listWidget->addItem("FlatCap");
   ui->listWidget->addItem("MiterJoin");

   ui->listWidget->addItem(" ");
   ui->listWidget->addItem("3");
   ui->listWidget->addItem("Polygon");
   ui->listWidget->addItem("900, 90, 910, 20, 970, 40, 980, 80");
   ui->listWidget->addItem("cyan");
   ui->listWidget->addItem("6");
   ui->listWidget->addItem("DashDotDotLine");
   ui->listWidget->addItem("FlatCap");
   ui->listWidget->addItem("MiterJoin");
   ui->listWidget->addItem("yellow");
   ui->listWidget->addItem("SolidPattern");

    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("4");
    ui->listWidget->addItem("Rectangle");
    ui->listWidget->addItem("20, 200, 170, 100");
    ui->listWidget->addItem("blue");
    ui->listWidget->addItem("0");
    ui->listWidget->addItem("DashLine");
    ui->listWidget->addItem("RoundCap");
    ui->listWidget->addItem("RoundJoin");
    ui->listWidget->addItem("red");
    ui->listWidget->addItem("VerPattern");


    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("5");
    ui->listWidget->addItem("Sqaure");
    ui->listWidget->addItem("250, 150, 200");
    ui->listWidget->addItem("red");
    ui->listWidget->addItem("0");
    ui->listWidget->addItem("SolidLine");
    ui->listWidget->addItem("RoundCap");
    ui->listWidget->addItem("RoundJoin");
    ui->listWidget->addItem("blue");
    ui->listWidget->addItem("HorPattern");



    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("6");
    ui->listWidget->addItem("Ellipse");
    ui->listWidget->addItem("520, 200, 170, 100");
    ui->listWidget->addItem("black");
    ui->listWidget->addItem("12");
    ui->listWidget->addItem("SolidLine");
    ui->listWidget->addItem("FlatCap");
    ui->listWidget->addItem("MiterJoin");
    ui->listWidget->addItem("white");
    ui->listWidget->addItem("NoBrush");



    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("7");
    ui->listWidget->addItem("Circle");
    ui->listWidget->addItem("black");
    ui->listWidget->addItem("12");
    ui->listWidget->addItem("SolidLine");
    ui->listWidget->addItem("FlatCap");
    ui->listWidget->addItem("MiterJoin");
    ui->listWidget->addItem("magenta");
    ui->listWidget->addItem("SolidPattern");




    ui->listWidget->addItem(" ");
    ui->listWidget->addItem("8");
    ui->listWidget->addItem("Text");
    ui->listWidget->addItem("250, 425, 500, 50");
    ui->listWidget->addItem("Class Project 2 - 2D Graphics Modeler");
    ui->listWidget->addItem("blue");
    ui->listWidget->addItem("AlignCenter");
    ui->listWidget->addItem("10");
    ui->listWidget->addItem("Comic Sans MS");
    ui->listWidget->addItem("FlatCap");
    ui->listWidget->addItem("Normal");


}

idList::~idList()
{
    delete ui;
}
