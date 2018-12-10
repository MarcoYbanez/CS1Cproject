#ifndef DATA_H_
#define DATA_H_

#include "vector.h"
#include "shape.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "text.h"

namespace data
{
    static vectorType<Shape*> shapeVector;
    static vectorType<Shape*> drawVector;
}

#endif /* DATA_H_ */
