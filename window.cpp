#include "renderarea.h"
#include "window.h"

#include <QtWidgets>

//! [0]
const int IdRole = Qt::UserRole;
//! [0]

//! [1]
Window::Window()
{
    renderArea = new RenderArea;

    shapeComboBox = new QComboBox;
    shapeComboBox->addItem(tr("Polygon"), RenderArea::PolygonE);
    shapeComboBox->addItem(tr("Rectangle"), RenderArea::RectangleE);
    shapeComboBox->addItem(tr("Ellipse"), RenderArea::EllipseE);
    shapeComboBox->addItem(tr("Line"), RenderArea::LineE);
    shapeComboBox->addItem(tr("Polyline"), RenderArea::PolylineE);
    shapeComboBox->addItem(tr("Text"), RenderArea::TextE);
\
    shapeLabel = new QLabel(tr("&Shape:"));
    shapeLabel->setBuddy(shapeComboBox);
    connect(shapeComboBox, SIGNAL(activated(int)),
            this, SLOT(shapeChanged()));


    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setColumnStretch(0, 1);
    mainLayout->setColumnStretch(3, 1);
    mainLayout->addWidget(renderArea, 0, 0, 1, 4);
    mainLayout->addWidget(shapeLabel, 2, 0, Qt::AlignRight);
    mainLayout->addWidget(shapeComboBox, 2, 1);

    setLayout(mainLayout);

    shapeChanged();

    setWindowTitle(tr("Shape Display"));
}

void Window::shapeChanged()
{
    RenderArea::Shapes shape = RenderArea::Shapes(shapeComboBox->itemData(
            shapeComboBox->currentIndex(), IdRole).toInt());
    renderArea->setShape(shape);
}


