#include "Circle.h"

Circle::Circle(int x, int y, int r, FillColor fill)
    :Ellipse(x, y, r, r, fill)
{

}

Circle::Circle(const Circle& c)
    :Ellipse(c)
{

}

Circle& Circle::operator=(const Circle& c)
{
    if (this != &c){
        this->setCx(getCx());
        this->setCy(getCy());
        this->setRx(getRx());
        this->setRy(getRx());
    }
    return *this;
}

Circle::~Circle()
{

}
