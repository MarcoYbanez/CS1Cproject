#ifndef AREALIST_H
#define AREALIST_H

#include <QWidget>

namespace Ui {
class areaList;
}

class areaList : public QWidget
{
    Q_OBJECT

public:
    explicit areaList(QWidget *parent = nullptr);
    ~areaList();

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

private:
    Ui::areaList *ui;
};

#endif // AREALIST_H
