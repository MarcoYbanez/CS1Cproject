#include "move.h"
#include "ui_move.h"


Move::Move(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Move)
{
    ui->setupUi(this);
}


Move::Move(Shape *s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Move)
{
    shapeInput = s;
    ui->setupUi(this);
}

// Helper Function
void Move::clearMoveInput()
{

    ui->semiMajorAxis->clear();
    ui->semiMinorAxis->clear();
}


void Move::on_semiMinorAxis_editingFinished()
{
    bool pass;
    bool pass2;
    double a = ui->semiMajorAxis->text().toDouble(&pass);
    double b = ui->semiMinorAxis->text().toDouble(&pass2);

    if(pass && pass2)
    {
       this->newX = a;
       this->newY = b;
    }
}



void Move::on_confirmMove_accepted()
{
    shapeInput->move(newX, newY);

    // Clear All Input
    clearMoveInput();
}

void Move::on_confirmMove_rejected()
{
    // Clear Screen and Input

    clearMoveInput();
}


Move::~Move()
{
    delete ui;
}
