
/********************************************************************************
*	Filename: main.cpp                                              			*
*	Project name: 2D Shape Render                                           	*
*-------------------------------------------------------------------------------*
*	Creator name's and email's:                                                 *
*       -mybanez0@saddleback.edu                                                *
*       -
*       -
*       -
*       -
*       -
*       -
*	Course-Section: CS 1C                                                       *
*	Creation Date: XX/XX/XX                                                     *
*	Date of Last Modification: XX/XX/XX                                         *
*-------------------------------------------------------------------------------*
*	Description: The modeler will demonstrate the capabilities of 2D Graphics   *
*       Modeler Inc.’s graphics engine. Potential customers will be looking for *
*       a 2D graphics rendering library which can be integrated into their own  *
*       software suite.                                                         *
*-------------------------------------------------------------------------------*
*	Algorithm:								*
*		1)								*
*-------------------------------------------------------------------------------*
*				Data Dictionary                                                 *
*	#Constants                                                                  *
*                                                                               *
*	Name            Data Type       Value                                       *
*	-----------     -----------     --------------------                        *
*										*
*										*
*	#Variables                                                                  *
*                                                                               *
*	Name            Data Type       Value                                       *
*	------------	------------	--------------------                        *
*										*
********************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

#include "mainwindow.h"

#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "shape.h"
#include "text.h"

#include <QApplication>

/*
-Marco
Personal Notes:
    - Identifiers are given first before reaching data
        --> how can the first part and commas be ignored.
            --> goal: algorithm to search a line for a series of words, then getline whatever is after
    - Data is given in strings
        --> convert by casting ?
        --> Switch statement


Example Data
ShapeId: 1
ShapeType: Line
ShapeDimensions: 20, 90, 100, 20
PenColor: blue
PenWidth: 2
PenStyle: DashDotLine
PenCapStyle: FlatCap
PenJoinStyle: MiterJoin


/********************************************************************************
*	PRE-CONDITION:                                                              *
*                                                                               *
*	Function name: ParseData()                                            		*
*                                                                               *
*	-Functionality: Designed to open data base and fill vector with data        *
*                                                                               *
*	-Variables                                                                  *
*                                                                               *
*	Name			Data Type		Value                                       *
*	------------	------------	--------------------                        *
*	-Process:                                                                   *
*        1) Open File                                                           *
*        2) Loop to gather data until the file closes                           *
*            3) Save shape ID since all shapes share                            *
*            4) ShapeType value will save as string first,                      *
*                    then be assigned an enum                                   *
*            5) switch statement for enum to finish gathering the rest of the   *
*                   data specfic to the shape                                   *
*	-Output: Vector filled with data                                			*
*                                                                           	*
*	-POST-CONDITION: Vector filled with shapes                                  *
*                                                                               *
********************************************************************************/





//Parser to be included within Vector class
void ParseData(){ //Since this will be a member of Vector, parameters will change

    enum ShapeType { Line, PolyLine, Polygon, Rectangle, Square, Ellipse, Circle, Text};

    ifstream& dataBase
    dataBase.open("shapes.txt");

    while(dataBase){



    }


    dataBase.close();


}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}