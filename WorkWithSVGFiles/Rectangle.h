#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
private:
    int m_width, m_height;
public:
    Rectangle(int=0, int=0, int=0, int=0, FillColor=notSet);
    Rectangle(const Rectangle&);
    Rectangle& operator=(const Rectangle&);
    ~Rectangle();
    int getWidth();
    int getHeight();
    void setWidth(int);
    void setHeight(int);
};

#endif // RECTANGLE_H
