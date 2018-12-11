#ifndef PERILIST_H
#define PERILIST_H

#include <QWidget>

namespace Ui {
class periList;
}

class periList : public QWidget
{
    Q_OBJECT

public:
    explicit periList(QWidget *parent = nullptr);
    ~periList();

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


private slots:

private:
    Ui::periList *ui;
};

#endif // PERILIST_H
