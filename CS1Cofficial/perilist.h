#ifndef PERILIST_H
#define PERILIST_H

#include <QWidget>
#include "vector.h"
#include "shape.h"

namespace Ui {
class periList;
}



class periList : public QWidget
{
    Q_OBJECT

public:
    explicit periList(vectorType<Shape*>& v,QWidget *parent = nullptr);
    ~periList();

    template <typename InputIterator, typename Predicate>
    void selection_sort(InputIterator first, InputIterator last, Predicate pred)
    {
        for (; first != last; ++first)
        {
               auto min = std::min_element(first, last, pred);
               if (pred(*min, *first))
                   std::iter_swap(min, first);
        }
    }



private:
    Ui::periList *ui;
    vectorType<Shape*> shapeVector;
};

#endif // PERILIST_H
