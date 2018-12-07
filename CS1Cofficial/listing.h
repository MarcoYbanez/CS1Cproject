#ifndef LISTING_H
#define LISTING_H
#include "shape.h"
#include "vector.h"
#include <fstream>
class listing
{
private:

public:
   void idList();
   void areaList();
   void periList();
   Shape * currentShape;
   void swap(int *xp, int *yp);
   void swapDouble(double*xp, double*yp);
   void bubbleSort(int arr[], int n);
   void bubbleSortDouble(double arr[], int n);
};

void idList()
{
    vectorType<Shape> shapeV;
   std::ifstream shapeFile;
   int ids[8];
   shapeFile.open("/Users/imaad/Documents/CS1Cproject/CS1Cofficial/shapes.txt");
   // shapeV.parse();
   // for (int i = 0; i < shapeV.getSize(); i++)
     //   shapeV[i].getId() = ids[i];

}

void areaList()
{
    vectorType<Shape> shapeV;
   std::ifstream shapeFile;
   double areas[6];
   shapeFile.open("/Users/imaad/Documents/CS1Cproject/CS1Cofficial/shapes.txt");
   //shapeV.parse();
   for (int i = 0; i < shapeV.getSize(); i++)
   {
     //  if (shapeV[i].getArea() > 0)
       //    shapeV[i].getArea() = areas[i];
   }
}

void periList()
{
    vectorType<Shape> shapeV;
    std::ifstream shapeFile;
    double perimeters[6];
    shapeFile.open("/Users/imaad/Documents/CS1Cproject/CS1Cofficial/shapes.txt");
    //shapeV.parse();
    for (int i = 0; i < shapeV.getSize(); i++)
    {
     //   if (shapeV[i].getPerimeter() > 0)
           // shapeV[i].getPerimeter() = perimeters[i];
    }

}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


void bubbleSortDouble(double arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
          // if (arr[j] > arr[j+1])
            //  swapDouble(&arr[j], &arr[j+1]);
}

#endif // LISTING_H
