
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

/*
Example Data
ShapeId: 1
ShapeType: Line
ShapeDimensions: 20, 90, 100, 20
PenColor: blue
PenWidth: 2
PenStyle: DashDotLine
PenCapStyle: FlatCap
PenJoinStyle: MiterJoin
*/

//Parser to be included within Vector class
void ParseData(){ //Since this will be a member of Vector, parameters will change

    enum ShapeType { Line, PolyLine, Polygon, Rectangle, Square, Ellipse, Circle, Text};
    ShapeType enumVal;

    ifstream& dataBase
    dataBase.open("shapes.txt");

   // C

	string target = "ShapeId: ";
	string line; 
	int ShapeId;
	string ShapeType;

	/*
		NOTE: I could switch to enum if depending on constructors
	*/

	//General Characteristics Shared by most shapes 
	string ShapeDimensions; 	// saved as an entire string, but will slice into individual int's
	string PenColor;
	int PenWidth;
	string PenStyle;
	string PenCapStyle;
	string PenJoinStyle;

	string BrushColor;
	string BrushStyle;

	//Characteristics for just text
	string TextString;
	string TextColor; 
	string TextAlignment;
	string TextPointSize;
	string TextFontFamily;
	string TextFontStyle;
	string TextFontWeight;

    while(!(dataBase.eof())){
    	getline(dataBase, line);

    	//identifier has been taken in.
    	if(line.find(target) != std::string::npos){ // ShapeID: is found 
    		
    		ShapeID = stoi(line.substr(9));
    		getline(dataBase, ShapeType);
    		ShapeType = ShapeType.substr(11);

    		if(ShapeType == "Line"){
    			

    		}
    		if(ShapeType == "Polyline"){

    		}
    		if(ShapeType == "Polygon"){

    		}
    		if(ShapeType == "Rectangle"){

    		}
    		if(ShapeType == "Square"){

    		}
    		if(ShapeType == "Ellipse"){

    		}
    		if(ShapeType == "Circle"){

    		}
    		if(ShapeType == "Text"){

    		}



    	}


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