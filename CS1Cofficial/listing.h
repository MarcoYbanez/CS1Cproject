#ifndef LISTING_H
#define LISTING_H
#include "shape.h"
#include "vector.h"
#include "data.h"
#include "circle.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "square.h"
#include "text.h"
class listing
{
private:

public:
    int idsP[6];
    string typeP[6];
    int idsA[6];
    string typeA[6];
    double areasA[6];
    double perimetersA[6];
    double areasP[6];
    double perimetersP[6];

    void idList()
    {
       int ids[8];
       string type[8];
       int x[8];
       int y[8];
       string color[8];
       int width[8];
       string penStyle[8];
        for (int i = 0; i < data::shapeVector.getSize(); i++)
           ids[i] = data::shapeVector[i]->getShapeId();
        bubbleSort(ids,8);
    }

    void areaList()
    {

       for (int i = 0; i < data::shapeVector.getSize(); i++)
           if (data::shapeVector[i]->getArea() > 0)
                areasA[i] = data::shapeVector[i]->getArea();
        bubbleSortDouble(areasA,6);
        for (int i = 0; i < data::shapeVector.getSize(); i++)
            if (areasA[i] ==  data::shapeVector[i]->getArea())
            {
                typeA[i] = data::shapeVector[i]->getTextString();
                idsA[i] = data::shapeVector[i]->getShapeId();
                perimetersA[i] = data::shapeVector[i]->getPerimeter();
            }
    }

    void periList()
    {

        for (int i = 0; i < data::shapeVector.getSize(); i++)
            if (data::shapeVector[i]->getPerimeter() > 0)
                perimetersP[i] = data::shapeVector[i]->getPerimeter();
        bubbleSortDouble(perimetersP, 6);
        for (int i = 0; i < data::shapeVector.getSize(); i++)
            if (perimetersP[i] ==  data::shapeVector[i]->getPerimeter())
            {
                typeP[i] = data::shapeVector[i]->getTextString();
                idsP[i] = data::shapeVector[i]->getShapeId();
                areasA[i] = data::shapeVector[i]->getArea();
            }
    }

   void swap(int *xp, int *yp)
   {
       int temp = *xp;
       *xp = *yp;
       *yp = temp;
   }

   void swapDouble (double *xp, double *yp)
   {
       double temp = *xp;
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
              if (arr[j] > arr[j+1])
                 swapDouble(&arr[j], &arr[j+1]);
   }

};

#endif //LISTING_H
