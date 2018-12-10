/********************************************************************************
** Form generated from reading UI file 'addremove.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREMOVE_H
#define UI_ADDREMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRemove
{
public:
    QRadioButton *radioAdd;
    QRadioButton *radioRemove;
    QStackedWidget *stackedWidget;
    QWidget *blank;
    QWidget *remove;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QListWidget *selectShape;
    QListWidget *shapeName;
    QWidget *add;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget_2;
    QWidget *addBlank;
    QWidget *ellipse;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *semiMajorAxis;
    QLineEdit *semiMinorAxis;
    QWidget *line;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineX1;
    QLineEdit *lineY1;
    QLineEdit *lineX2;
    QLineEdit *lineY2;
    QWidget *polygon;
    QWidget *polyline;
    QWidget *text;
    QLabel *label_14;
    QLineEdit *textString;
    QLineEdit *textLength;
    QLineEdit *textWidth;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *textX;
    QLineEdit *textY;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *rectangle;
    QLabel *label_11;
    QLineEdit *rectLength;
    QLineEdit *rectWidth;
    QLabel *label_12;
    QLabel *label_13;
    QDialogButtonBox *confirmAdd;
    QPushButton *Back;

    void setupUi(QWidget *addRemove)
    {
        if (addRemove->objectName().isEmpty())
            addRemove->setObjectName(QStringLiteral("addRemove"));
        addRemove->resize(401, 301);
        radioAdd = new QRadioButton(addRemove);
        radioAdd->setObjectName(QStringLiteral("radioAdd"));
        radioAdd->setGeometry(QRect(10, 10, 82, 17));
        radioRemove = new QRadioButton(addRemove);
        radioRemove->setObjectName(QStringLiteral("radioRemove"));
        radioRemove->setGeometry(QRect(10, 30, 82, 17));
        stackedWidget = new QStackedWidget(addRemove);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(79, -1, 321, 301));
        blank = new QWidget();
        blank->setObjectName(QStringLiteral("blank"));
        stackedWidget->addWidget(blank);
        remove = new QWidget();
        remove->setObjectName(QStringLiteral("remove"));
        label = new QLabel(remove);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 61, 31));
        buttonBox = new QDialogButtonBox(remove);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 270, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(remove);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 0, 61, 31));
        selectShape = new QListWidget(remove);
        selectShape->setObjectName(QStringLiteral("selectShape"));
        selectShape->setGeometry(QRect(10, 30, 111, 231));
        shapeName = new QListWidget(remove);
        shapeName->setObjectName(QStringLiteral("shapeName"));
        shapeName->setGeometry(QRect(135, 30, 171, 231));
        stackedWidget->addWidget(remove);
        add = new QWidget();
        add->setObjectName(QStringLiteral("add"));
        comboBox = new QComboBox(add);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 10, 121, 22));
        stackedWidget_2 = new QStackedWidget(add);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 40, 321, 221));
        addBlank = new QWidget();
        addBlank->setObjectName(QStringLiteral("addBlank"));
        stackedWidget_2->addWidget(addBlank);
        ellipse = new QWidget();
        ellipse->setObjectName(QStringLiteral("ellipse"));
        label_3 = new QLabel(ellipse);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 10, 51, 20));
        label_4 = new QLabel(ellipse);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 40, 101, 16));
        label_5 = new QLabel(ellipse);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 80, 101, 16));
        semiMajorAxis = new QLineEdit(ellipse);
        semiMajorAxis->setObjectName(QStringLiteral("semiMajorAxis"));
        semiMajorAxis->setGeometry(QRect(160, 40, 113, 20));
        semiMinorAxis = new QLineEdit(ellipse);
        semiMinorAxis->setObjectName(QStringLiteral("semiMinorAxis"));
        semiMinorAxis->setGeometry(QRect(160, 80, 113, 20));
        stackedWidget_2->addWidget(ellipse);
        line = new QWidget();
        line->setObjectName(QStringLiteral("line"));
        label_6 = new QLabel(line);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 10, 47, 13));
        label_7 = new QLabel(line);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 40, 47, 21));
        label_8 = new QLabel(line);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 160, 47, 21));
        label_9 = new QLabel(line);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 80, 47, 21));
        label_10 = new QLabel(line);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 120, 47, 21));
        lineX1 = new QLineEdit(line);
        lineX1->setObjectName(QStringLiteral("lineX1"));
        lineX1->setGeometry(QRect(120, 40, 113, 20));
        lineY1 = new QLineEdit(line);
        lineY1->setObjectName(QStringLiteral("lineY1"));
        lineY1->setGeometry(QRect(120, 80, 113, 20));
        lineX2 = new QLineEdit(line);
        lineX2->setObjectName(QStringLiteral("lineX2"));
        lineX2->setGeometry(QRect(120, 120, 113, 20));
        lineY2 = new QLineEdit(line);
        lineY2->setObjectName(QStringLiteral("lineY2"));
        lineY2->setGeometry(QRect(120, 160, 113, 20));
        stackedWidget_2->addWidget(line);
        polygon = new QWidget();
        polygon->setObjectName(QStringLiteral("polygon"));
        stackedWidget_2->addWidget(polygon);
        polyline = new QWidget();
        polyline->setObjectName(QStringLiteral("polyline"));
        stackedWidget_2->addWidget(polyline);
        text = new QWidget();
        text->setObjectName(QStringLiteral("text"));
        label_14 = new QLabel(text);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(140, 10, 47, 13));
        textString = new QLineEdit(text);
        textString->setObjectName(QStringLiteral("textString"));
        textString->setGeometry(QRect(130, 40, 113, 20));
        textLength = new QLineEdit(text);
        textLength->setObjectName(QStringLiteral("textLength"));
        textLength->setGeometry(QRect(130, 160, 113, 20));
        textWidth = new QLineEdit(text);
        textWidth->setObjectName(QStringLiteral("textWidth"));
        textWidth->setGeometry(QRect(130, 200, 113, 20));
        label_15 = new QLabel(text);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 40, 47, 21));
        label_16 = new QLabel(text);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 160, 47, 21));
        label_17 = new QLabel(text);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 200, 47, 21));
        textX = new QLineEdit(text);
        textX->setObjectName(QStringLiteral("textX"));
        textX->setGeometry(QRect(130, 80, 113, 20));
        textY = new QLineEdit(text);
        textY->setObjectName(QStringLiteral("textY"));
        textY->setGeometry(QRect(130, 120, 113, 20));
        label_18 = new QLabel(text);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 82, 47, 21));
        label_19 = new QLabel(text);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 120, 47, 21));
        stackedWidget_2->addWidget(text);
        rectangle = new QWidget();
        rectangle->setObjectName(QStringLiteral("rectangle"));
        label_11 = new QLabel(rectangle);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 10, 47, 13));
        rectLength = new QLineEdit(rectangle);
        rectLength->setObjectName(QStringLiteral("rectLength"));
        rectLength->setGeometry(QRect(120, 40, 113, 20));
        rectWidth = new QLineEdit(rectangle);
        rectWidth->setObjectName(QStringLiteral("rectWidth"));
        rectWidth->setGeometry(QRect(120, 80, 113, 20));
        label_12 = new QLabel(rectangle);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 40, 47, 21));
        label_13 = new QLabel(rectangle);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 80, 47, 21));
        stackedWidget_2->addWidget(rectangle);
        confirmAdd = new QDialogButtonBox(add);
        confirmAdd->setObjectName(QStringLiteral("confirmAdd"));
        confirmAdd->setGeometry(QRect(150, 270, 156, 23));
        confirmAdd->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(add);
        Back = new QPushButton(addRemove);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(10, 270, 75, 23));

        retranslateUi(addRemove);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(addRemove);
    } // setupUi

    void retranslateUi(QWidget *addRemove)
    {
        addRemove->setWindowTitle(QApplication::translate("addRemove", "addRemove", Q_NULLPTR));
        radioAdd->setText(QApplication::translate("addRemove", "Add", Q_NULLPTR));
        radioRemove->setText(QApplication::translate("addRemove", "Remove", Q_NULLPTR));
        label->setText(QApplication::translate("addRemove", "Shape ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("addRemove", "Shape Name", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("addRemove", "ellipse", Q_NULLPTR)
         << QApplication::translate("addRemove", "line", Q_NULLPTR)
         << QApplication::translate("addRemove", "polygon", Q_NULLPTR)
         << QApplication::translate("addRemove", "polyline", Q_NULLPTR)
         << QApplication::translate("addRemove", "rectangle", Q_NULLPTR)
         << QApplication::translate("addRemove", "text", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("addRemove", "Ellipse", Q_NULLPTR));
        label_4->setText(QApplication::translate("addRemove", "Semi-major Axis", Q_NULLPTR));
        label_5->setText(QApplication::translate("addRemove", "Semi-minor Axis", Q_NULLPTR));
        label_6->setText(QApplication::translate("addRemove", "Line", Q_NULLPTR));
        label_7->setText(QApplication::translate("addRemove", "X1", Q_NULLPTR));
        label_8->setText(QApplication::translate("addRemove", "Y2", Q_NULLPTR));
        label_9->setText(QApplication::translate("addRemove", "Y1", Q_NULLPTR));
        label_10->setText(QApplication::translate("addRemove", "X2", Q_NULLPTR));
        label_14->setText(QApplication::translate("addRemove", "Text", Q_NULLPTR));
        label_15->setText(QApplication::translate("addRemove", "Text", Q_NULLPTR));
        label_16->setText(QApplication::translate("addRemove", "Length", Q_NULLPTR));
        label_17->setText(QApplication::translate("addRemove", "Width", Q_NULLPTR));
        label_18->setText(QApplication::translate("addRemove", "X", Q_NULLPTR));
        label_19->setText(QApplication::translate("addRemove", "Y", Q_NULLPTR));
        label_11->setText(QApplication::translate("addRemove", "rectangle", Q_NULLPTR));
        label_12->setText(QApplication::translate("addRemove", "Length", Q_NULLPTR));
        label_13->setText(QApplication::translate("addRemove", "Width", Q_NULLPTR));
        Back->setText(QApplication::translate("addRemove", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addRemove: public Ui_addRemove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREMOVE_H
