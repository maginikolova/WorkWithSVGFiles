#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Ellipse.h"

class Circle: public Ellipse
{
    public:
        Circle(int=0, int=0, int=0, FillColor=notSet);
        Circle(const Circle& c);
        Circle& operator=(const Circle& c);
        ~Circle();
};

#endif // CIRCLE_H
