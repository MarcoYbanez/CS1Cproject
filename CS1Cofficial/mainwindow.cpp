#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contact.h"
#include "login.h"
#include <QPainter>
#include <shape.h>
#include "ellipse.h"
#include "rectangle.h"
#include "addremove.h"
#include "square.h"
#include "circle.h"
#include "data.h"
#include <fstream>

#include <QtWidgets>
#include "drawwt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    //have once a shape is saved create a signal and slot between that button and here.
    ui->setupUi(this);
    parse();

    for(int i = 0; i < data::shapeVector.getSize(); i++){
            QString temp(data::shapeVector[i]->getTextString().c_str());
            ui->availableShapesList->addItem(temp);

    }

    Ellipse *e = new Ellipse;
    ui->canvas->setShape(e);

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
    qDebug() << selectedShape;
    ui->canvas->setShape(data::shapeVector[selectedShape]);

    data::drawVector.push_back(data::shapeVector[selectedShape]);


    ui->canvas->update();

            QString temp(data::drawVector[data::drawVector.getSize() -1]->getTextString().c_str());
            ui->currentShapes->addItem(temp);


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

void MainWindow::on_move_btn_clicked()
{

}

void MainWindow::parse()
    {
        string file = "/home/cs1c/Desktop/This/CS1Cproject/CS1Cofficial/shapes.txt";
        string Data= "";
        string shapeType = "";
        int num = 0;
        int d = 0;
        string o = "";

        std::ifstream shapesFile;
        //change to current shape.
        shapesFile.open(file);
        if(shapesFile.fail())
            qDebug() << "fail";

        Shape* elem;

        while(!shapesFile.eof())
        {

            //look for new shape
          getline(shapesFile,Data, '-');
          //skip to ID
          getline(shapesFile, Data, ' ');

          //Get ID of the shape
          getline(shapesFile, o , '\r');

          //store shape
          d = stoi(o);

          //get to shape type
          getline(shapesFile, Data, ' ');
          //Get shape type
          getline(shapesFile, Data, '\r');
          //store shapeType

          shapeType = Data;



          if(shapeType == "Line")
          {

              int x1 = 0;
              int x2 = 0;
              int y1 = 0;
              int y2 = 0;
              elem = new Line;
              // set id
              elem->setID(d);
                elem->setShapeType(shapeType);

              //set dimmentsion
               getline(shapesFile, Data, ' ');

               getline(shapesFile, Data, ',');
               x1 = stoi(Data);

               getline(shapesFile, Data, ',');
               y1 = stoi(Data);
               getline(shapesFile, Data, ',');
               x2 = stoi(Data);
               getline(shapesFile, Data, '\r');
               y2 = stoi(Data);

               elem->setCord(x1,y1,x2,y2);
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, '\r');
               elem->setColor(Data);
               //get and set pen width
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               d = stoi(Data);
               elem->setWidth(d);
               //get and set penstyle
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setPenStyle(Data);
               //get and set pen cap style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setCapStyle(Data);
               //get and set pen join style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setJoinStyle(Data);

               data::shapeVector.push_back(elem);
}
          else if(shapeType == "Polygon")
          {
              int x1 = 0;
              int x2 = 0;
              int x3 = 0;
              int x4 = 0;
              int y1 = 0;
              int y2 = 0;
              int y3 = 0;
              int y4 = 0;
              Polygon* elem = new Polygon;
              // set id
              elem->setID(d);
                elem->setShapeType(shapeType);

              //set dimmension
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, ',');
               x1 = stoi(Data);

               getline(shapesFile, Data, ',');
               y1 = stoi(Data);
               getline(shapesFile, Data, ',');
               x2 = stoi(Data);
               getline(shapesFile, Data, ',');
               y2 = stoi(Data);
               getline(shapesFile, Data, ',');
               x3 = stoi(Data);
               getline(shapesFile, Data, ',');
               y3 = stoi(Data);
               getline(shapesFile, Data, ',');
               x4 = stoi(Data);
               getline(shapesFile, Data, '\r');
               y4 = stoi(Data);

               elem->setCord(x1,y1,x2,y2,x3,y3,x4,y4);
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, '\r');
               elem->setColor(Data);
               //get and set pen width
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               d = stoi(Data);
               elem->setWidth(d);
               //get and set penstyle
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setPenStyle(Data);
               //get and set pen cap style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setCapStyle(Data);
               //get and set pen join style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setJoinStyle(Data);
               //get and set burshColor;
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');

               elem->setBrushColor(Data);
               //get and set brush style;
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');

               elem->setBrushStyle(Data);

               data::shapeVector.push_back(elem);
              qDebug() << QString::fromStdString(Data);
          }
          else if (shapeType == "Polyline")
          {

              int x1 = 0;
              int x2 = 0;
              int x3 = 0;
              int x4 = 0;
              int y1 = 0;
              int y2 = 0;
              int y3 = 0;
              int y4 = 0;
              Polyline* elem = new Polyline;
              // set id
              elem->setID(d);
                elem->setShapeType(shapeType);

              //set dimmension
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, ',');
               x1 = stoi(Data);

               getline(shapesFile, Data, ',');
               y1 = stoi(Data);
               getline(shapesFile, Data, ',');
               x2 = stoi(Data);
               getline(shapesFile, Data, ',');
               y2 = stoi(Data);
               getline(shapesFile, Data, ',');
               x3 = stoi(Data);
               getline(shapesFile, Data, ',');
               y3 = stoi(Data);
               getline(shapesFile, Data, ',');
               x4 = stoi(Data);
               getline(shapesFile, Data, '\r');
               y4 = stoi(Data);

               elem->setCord(x1,y1,x2,y2,x3,y3,x4,y4);
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, '\r');
               elem->setColor(Data);
               //get and set pen width
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               d = stoi(Data);
               elem->setWidth(d);
               //get and set penstyle
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setPenStyle(Data);
               //get and set pen cap style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setCapStyle(Data);
               //get and set pen join style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setJoinStyle(Data);


               data::shapeVector.push_back(elem);
              qDebug() << QString::fromStdString(Data);
              qDebug() << QString::fromStdString(Data);
          }
          else if(shapeType == "Ellipse")
          {
              {
                        int x = 0;
                        int y = 0;
                        int a = 0;
                        int b = 0;
                        elem = new Ellipse;

                        elem->setShapeType(shapeType);

                        // set id
                        elem->setID(d);
                         //set dimmensions
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data, ',');
                         x = stoi(Data);
                         getline(shapesFile, Data, ',');
                         y = stoi(Data);
                         getline(shapesFile, Data, ',');
                         a= stoi(Data);
                         getline(shapesFile, Data, '\r');
                         b = stoi(Data);

                         elem->setCord(x,y,a,b);
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data, '\r');
                         elem->setColor(Data);
                         //get and set pen width
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         d = stoi(Data);
                         elem->setWidth(d);
                         //get and set penstyle
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setPenStyle(Data);
                         //get and set pen cap style
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setCapStyle(Data);
                         //get and set pen join style
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setJoinStyle(Data);
                         //get and set burshColor;
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');

                         elem->setBrushColor(Data);
                         //get and set brush style;
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');

                         elem->setBrushStyle(Data);

                         data::shapeVector.push_back(elem);
              }
          }
          else if(shapeType == "Circle")
          {

                        int x = 0;
                        int y = 0;
                        int a = 0;
                        int b = 0;
                        elem = new Circle;

                        elem->setShapeType(shapeType);

                        // set id
                        elem->setID(d);
                         //set dimmensions
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data, ',');
                         x = stoi(Data);
                         getline(shapesFile, Data, ',');
                         y = stoi(Data);
                         getline(shapesFile, Data, '\r');
                         a = stoi(Data);

                         elem->setCord(x,y,a,b);
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data, '\r');

                         elem->setColor(Data);
                         //get and set pen width
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         d = stoi(Data);
                         elem->setWidth(d);
                         //get and set penstyle
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setPenStyle(Data);
                         //get and set pen cap style
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setCapStyle(Data);
                         //get and set pen join style
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setJoinStyle(Data);
                         //get and set burshColor;
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');
                         elem->setBrushColor(Data);
                         //get and set brush style;
                         getline(shapesFile, Data, ' ');
                         getline(shapesFile, Data , '\r');

                         elem->setBrushStyle(Data);

                         data::shapeVector.push_back(elem);
          }
          else if(shapeType == "Square")
          {
                    int x = 0;
                    int y = 0;
                    int l = 0;
                    int w = 0;
                    elem = new Square;

                    elem->setShapeType(shapeType);

                    // set id
                    elem->setID(d);
                     //set dimmensions
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, ',');
                     x = stoi(Data);
                     getline(shapesFile, Data, ',');
                     y = stoi(Data);
                     getline(shapesFile, Data, '\r');
                     l = stoi(Data);

                     elem->setCord(x,y,l,w);
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     elem->setColor(Data);
                     //get and set pen width
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     d = stoi(Data);
                     elem->setWidth(d);
                     //get and set penstyle
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     elem->setPenStyle(Data);
                     //get and set pen cap style
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     elem->setCapStyle(Data);
                     //get and set pen join style
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     elem->setJoinStyle(Data);
                     //get and set burshColor;
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     elem->setBrushColor(Data);
                     //get and set brush style;
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data , '\r');
                     elem->setBrushStyle(Data);

                     data::shapeVector.push_back(elem);
          }
          else if(shapeType == "Text")
          {
                    int x = 0;
                    int y = 0;
                    int l = 0;
                    int w = 0;
                    elem = new Text;

                    elem->setShapeType(shapeType);

                    // set id
                    elem->setID(d);
                     //set dimmensions
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, ',');
                     x = stoi(Data);
                     getline(shapesFile, Data, ',');
                     y = stoi(Data);
                     getline(shapesFile, Data, ',');
                     l = stoi(Data);
                     getline(shapesFile, Data, '\r');
                     w = stoi(Data);

                     elem->setCord(x,y,l,w);
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     elem->setText(Data);
                     //Set penColor
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     elem->setColor(Data);
                     //Set Allignment
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     elem->setAlignment(Data);
                     //set text size
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     x = stoi(Data);
                     elem->setPointSize(x);
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');
                     elem->setFamily(Data);
                     getline(shapesFile, Data, ' ');
                     getline(shapesFile, Data, '\r');


//qDebug() << QString::fromStdString(Data);

                     data::shapeVector.push_back(elem);
          }
    else if(shapeType == "Rectangle")
    {
              int x = 0;
              int y = 0;
              int l = 0;
              int w = 0;
              elem = new Rectangle;

              elem->setShapeType(shapeType);

              // set id
              elem->setID(d);
               //set dimmensions
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, ',');
               x = stoi(Data);
               getline(shapesFile, Data, ',');
               y = stoi(Data);
               getline(shapesFile, Data, ',');
               l = stoi(Data);
               getline(shapesFile, Data, '\r');
               w = stoi(Data);

               elem->setCord(x,y,l,w);
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data, '\r');
               elem->setColor(Data);
               //get and set pen width
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               d = stoi(Data);
               elem->setWidth(d);
               //get and set penstyle
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setPenStyle(Data);
               //get and set pen cap style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setCapStyle(Data);
               //get and set pen join style
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setJoinStyle(Data);
               //get and set burshColor;
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setBrushColor(Data);
               //get and set brush style;
               getline(shapesFile, Data, ' ');
               getline(shapesFile, Data , '\r');
               elem->setBrushStyle(Data);

                data::shapeVector.push_back(elem);
            }
          num++;
        }//End of while loop
      //  QString b =Data;
      //  qDebug() << QString::fromStdString(Data);
    }

