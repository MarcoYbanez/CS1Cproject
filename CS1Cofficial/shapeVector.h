#ifndef SHAPEVECTOR
#define SHAPEVECTOR

#include "vector.h"
#include "shape.h"

#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "shape.h"
#include "text.h"

class shapeVector{

public:
	  //*************//
	 // Constructor //
	//*************//
	shapeVector();

	  //***********************//
	 // Program Functionality //
	//***********************//	
	void addShape();
	void deleteShape();
		/* Add other options here */

private:
	  //*********//
	 // Purpose //
	//*********//
	void ParseData();	
	void dimmensionParser(string& dimmensionString, int Array[]);

	//vector<*shape> Storage;

};

#endif