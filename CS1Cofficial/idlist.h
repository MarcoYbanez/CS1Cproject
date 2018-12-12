#ifndef IDLIST_H
#define IDLIST_H


#include <QWidget>
#include "vector.h"
#include "shape.h"

namespace Ui {
class idList;
}



class idList : public QWidget
{
    Q_OBJECT

public:
    explicit idList(vectorType<Shape*>& v,QWidget *parent = nullptr);
    ~idList();

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
    Ui::idList *ui;
    vectorType<Shape*> shapeVector;
};
#endif // IDLIST_H
