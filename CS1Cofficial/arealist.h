#ifndef AREALIST_H
#define AREALIST_H

#include <QWidget>
#include "vector.h"
#include "shape.h"

namespace Ui {
class areaList;
}

class areaList : public QWidget
{
    Q_OBJECT

public:
    explicit areaList(vectorType<Shape*>&v, QWidget *parent = nullptr);
    ~areaList();

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
    Ui::areaList *ui;
    vectorType<Shape*> shapeVector;
};

#endif // AREALIST_H
