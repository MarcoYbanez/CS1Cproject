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

MainWindow::MainWindow(vectorType<Shape*>& v, vectorType<Shape*>& v2, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    shapeVector = v;
    drawVector = v2;
    //have once a shape is saved create a signal and slot between that button and here.
    ui->setupUi(this);
    //parse();

    for(int i = 0; i < shapeVector.getSize(); i++){
            QString temp(shapeVector[i]->getTextString().c_str());
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
    ui->canvas->setShape(shapeVector[selectedShape]);

    data::drawVector.push_back(shapeVector[selectedShape]);


    ui->canvas->update();

            QString temp(data::drawVector[data::drawVector.getSize() -1]->getTextString().c_str());
            ui->currentShapes->addItem(temp);


}

void MainWindow::on_login_btn_clicked()
{
    logIn *l = new logIn;
    l->show();
	access = l->getaccess();
}

void MainWindow::on_pushButton_4_clicked()
{
	if(access)
	{
		addRemove* add = new addRemove(shapeVector);
		add->show();
		if(!add->isVisible())
			loadAvailableShapes();
	}
}

void MainWindow::on_pushButton_5_clicked()
{
    ofstream Outfile;
    Outfile.open(PUT FILE PATH STRING HERE);
    Outfile << endl;
    for (int i = 0; i < shapeVector.getSize(); ++i) {
        Outfile << "-Shape Id: " << shapeVector[i]->getShapeId() << endl;
        Outfile << "ShapeType: " << shapeVector[i]->getTextString() << endl;
        if (shapeVector[i]->getTextString() == "Line")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getX2() << ", " << shapeVector[i]->getY2() << endl;
        else if (shapeVector[i]->getTextString() == "Polyline")
            Outfile << "ShapeDimensions: " <<shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getX2() << ", " << shapeVector[i]->getY2() << ", " << shapeVector[i]->getX3() << ", " << shapeVector[i]->getY3() << ", " << shapeVector[i]->getX4() << ", " << shapeVector[i]->getY4() << endl;
        else if (shapeVector[i]->getTextString() == "Polygon")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getX2() << ", " << shapeVector[i]->getY2() << ", " << shapeVector[i]->getX3() << ", " << shapeVector[i]->getY3() << ", " << shapeVector[i]->getX4() << ", " << shapeVector[i]->getY4() << endl;
        else if (shapeVector[i]->getTextString() == "Rectangle")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getL() << ", " << shapeVector[i]->getW() << endl;
        else if (shapeVector[i]->getTextString() == "Square")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getL() << endl;
        else if (shapeVector[i]->getTextString() == "Ellipse")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getAx() << ", " << shapeVector[i]->getBx() << endl;
        else if (shapeVector[i]->getTextString() == "Circle")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getAx() << ", " << shapeVector[i]->getBx() << endl;
        else if (shapeVector[i]->getTextString() == "Text")
            Outfile << "ShapeDimensions: " << shapeVector[i]->getX() << ", " << shapeVector[i]->getY() << ", " << shapeVector[i]->getL() << ", " << shapeVector[i]->getW() << endl;
        Outfile << "PenColor: " << shapeVector[i]->getQPenColor() << endl;
        Outfile << "PenWidth: " << shapeVector[i]->getQPenWidth() << endl;
        Outfile << "PenStyle: " << shapeVector[i]->getQPenStyle() << endl;
        Outfile << "PenCapStyle: " << shapeVector[i]->getQPenCapStyle() << endl;
        Outfile << "PenJoinStyle: " << shapeVector[i]->getQPenJoinStyle() << endl;
        Outfile << endl;
    }
    Outfile.close();

    QMessageBox savemsg;
    savemsg.setText("Your shape data has been saved.");
    savemsg.exec();
}

void MainWindow::on_move_btn_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    if(ui->currentShapes->count() > 0 && ui->currentShapes->currentRow() + 1)
    {
        QString ID = ui->currentShapes->currentItem()->text();
        for(Shape** i = drawVector.begin(); i != drawVector.end(); i++)
        {
            QString temp((**i).getShapeId());
            if(temp == ID)
                {
                    delete *i;
                    drawVector.erase(i);
                    break;
                }
        }

        delete ui->currentShapes->currentItem();
        ui->currentShapes->removeItemWidget(ui->currentShapes->currentItem());
    }
}

void MainWindow::loadAvailableShapes()
{
	for(int i = 0; i < ui->availableShapesList->count(); i++)
	{
		delete ui->availableShapesList->item(i);
	}
	ui->availableShapesList->clear();
	for(int i = 0; i < shapeVector.getSize(); i++){
		QString temp(shapeVector[i]->getTextString().c_str());
		ui->availableShapesList->addItem(temp);
		
		if(shapeVector[i] == nullptr)
			shapeVector.erase(i);
	}
}