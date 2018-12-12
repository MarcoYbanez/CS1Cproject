#include "addremove.h"
#include "ui_addremove.h"
#include <stdlib.h>

addRemove::addRemove(vectorType<Shape*>& v, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRemove)
{
    shapeVector = v;
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->blank);

    shapeInput = nullptr;

    for(int i = 0; i < shapeVector.getSize(); i++)
    {
        QString temp(std::to_string(shapeVector[i]->getShapeId()).c_str());
        ui->selectShape->addItem(temp);
        QString temp2(shapeVector[i]->getTextString().c_str());
        ui->shapeName->addItem(temp2);
    }
}

addRemove::~addRemove()
{
    delete ui;
}

// Base Page
void addRemove::on_Back_clicked()
{
    this->close();
}

void addRemove::on_radioAdd_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->add);
}

void addRemove::on_radioRemove_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->remove);
}

// Remove Page
void addRemove::on_buttonBox_accepted()
{
    if(ui->selectShape->count() > 0 && ui->selectShape->currentRow() + 1)
    {
        // Find and Delete Shape From Vector
        QString ID = ui->selectShape->currentItem()->text();
        for(Shape** i = shapeVector.begin(); i != shapeVector.end(); i++)
        {
            QString temp((**i).getShapeId());
            if(temp == ID)
                {
                    delete *i;
					*i = nullptr;
                    shapeVector.erase(i);
                    break;
                }
        }

        // Delete Shape From ListWidget/ListView
        ui->shapeName->setCurrentRow(ui->selectShape->currentIndex().row());
        delete ui->selectShape->currentItem();
        delete ui->shapeName->currentItem();
        ui->selectShape->removeItemWidget(ui->selectShape->currentItem());
        ui->shapeName->removeItemWidget(ui->shapeName->currentItem());
    }
}

void addRemove::on_buttonBox_rejected()
{
    ui->stackedWidget->setCurrentWidget(ui->blank);
}

// Add Page
void addRemove::on_comboBox_currentIndexChanged(int index)
{
    clearAddInput();
    delete shapeInput;
    shapeInput = nullptr;

    switch(index)
    {
    case 0:
        ui->stackedWidget_2->setCurrentWidget((ui->addBlank));
        break;
    case 1:
        ui->stackedWidget_2->setCurrentWidget(ui->ellipse);
        break;
    case 2:
        ui->stackedWidget_2->setCurrentWidget(ui->line);
        break;
    case 3:
        ui->stackedWidget_2->setCurrentWidget(ui->polygon);
        shapeInput = new Polygon;
        break;
    case 4:
        ui->stackedWidget_2->setCurrentWidget(ui->polyline);
        shapeInput = new Polyline;
        break;
    case 5:
        ui->stackedWidget_2->setCurrentWidget(ui->rectangle);
        break;
    case 6:
        ui->stackedWidget_2->setCurrentWidget(ui->text);
        break;
    }
}

void addRemove::on_semiMinorAxis_editingFinished()
{
    bool pass;
    bool pass2;
    double a = ui->semiMajorAxis->text().toDouble(&pass);
    double b = ui->semiMinorAxis->text().toDouble(&pass2);

    if(pass && pass2)
    {
       shapeInput = new Ellipse(a, b);
       shapeInput->setShapeType("Ellipse");
       if(shapeVector.getSize() > 0)
            shapeInput->setID(shapeVector[shapeVector.getSize() - 1]->getShapeId() + 1);
       else
            shapeInput->setID(1);
    }
}

void addRemove::on_lineY2_editingFinished()
{
    bool pass[4];
    double x1 = ui->lineX1->text().toDouble(&pass[0]);
    double y1 = ui->lineY1->text().toDouble(&pass[1]);
    double x2 = ui->lineX2->text().toDouble(&pass[2]);
    double y2 = ui->lineY2->text().toDouble(&pass[3]);

    if(pass[0] && pass[1] && pass[2] && pass[3])
    {
       shapeInput = new Line(x1, y1, x2, y2);
       shapeInput->setShapeType("Line");
       if(shapeVector.getSize() > 0)
            shapeInput->setID(shapeVector[shapeVector.getSize() - 1]->getShapeId() + 1);
       else
            shapeInput->setID(1);
    }
}

void addRemove::on_textWidth_editingFinished()
{
    bool pass[4];
    std::string str = ui->textString->text().toStdString();
    double length = ui->textLength->text().toDouble(&pass[0]);
    double width = ui->textWidth->text().toDouble(&pass[1]);
    double x = ui->textX->text().toDouble(&pass[2]);
    double y = ui->textY->text().toDouble(&pass[3]);

    if(pass[0] && pass[1] && pass[2] && pass[3])
    {
       shapeInput = new Text();
        shapeInput->setCord(x, y, length, width);
        shapeInput->setText(str);
        shapeInput->setShapeType("Text");
        if(shapeVector.getSize() > 0)
             shapeInput->setID(shapeVector[shapeVector.getSize() - 1]->getShapeId() + 1);
        else
             shapeInput->setID(1);
    }
}

void addRemove::on_rectWidth_editingFinished()
{
    bool pass[2];
    double length = ui->rectLength->text().toDouble(&pass[0]);
    double width = ui->rectWidth->text().toDouble(&pass[1]);

    if(pass[0] && pass[1])
    {
       shapeInput = new Rectangle(length, width);
       shapeInput->setShapeType("Rectangle");
       if(shapeVector.getSize() > 0)
            shapeInput->setID(shapeVector[shapeVector.getSize() - 1]->getShapeId() + 1);
       else
            shapeInput->setID(1);
    }
}

void addRemove::on_confirmAdd_accepted()
{
    // Add to Remove's list
    if(shapeInput != nullptr)
    {
        QString temp(std::to_string(shapeInput->getShapeId()).c_str());
        ui->selectShape->addItem(temp);
        QString temp2(shapeInput->getTextString().c_str());
        ui->shapeName->addItem(temp2);

        // Add to Vector
        shapeVector.push_back(shapeInput);

        // Clear All Input
        clearAddInput();
        shapeInput = nullptr;
    }
}

void addRemove::on_confirmAdd_rejected()
{
    // Clear Screen and Input
    ui->stackedWidget->setCurrentWidget(ui->blank);
    delete shapeInput;
    shapeInput = nullptr;
    clearAddInput();
}

// Helper Function
void addRemove::clearAddInput()
{
    ui->rectLength->clear();
    ui->rectWidth->clear();
    ui->lineX1->clear();
    ui->lineY1->clear();
    ui->lineX2->clear();
    ui->lineY2->clear();
    ui->textString->clear();
    ui->textLength->clear();
    ui->textWidth->clear();
    ui->textX->clear();
    ui->textY->clear();
    ui->semiMajorAxis->clear();
    ui->semiMinorAxis->clear();
}
