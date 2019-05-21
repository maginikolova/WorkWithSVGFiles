#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

enum FillColor{
    notSet,
    yellow,
    orange,
    red,
    blue,
    green
};

class Shape
{
private:

protected:
    int m_x;
    int m_y;
    FillColor m_fillColor;
public:
    Shape(int=0, int=0, FillColor=notSet);
    Shape(const Shape&);
    Shape& operator=(const Shape&);
    ~Shape();
    int getX();
    int getY();
    FillColor getFillColor();
    void setX(int);
    void setY(int);
    void setFillColor(FillColor);
    virtual void printShape(){ std::cout << "asd";}
    std::ostream& inserter(std::ostream &)const;
};

std::ostream &operator<<(std::ostream &, const Shape &);

#endif // SHAPE_H
