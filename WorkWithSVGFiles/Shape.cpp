#include <iostream>
#include <ostream>
#include "Shape.h"

using std::cout;

Shape::Shape(int x, int y, FillColor color)
    :m_x(x),m_y(y),m_fillColor(color)
{

}

Shape::Shape(const Shape& s)
{
    m_x = s.m_x;
    m_y = s.m_y;
    m_fillColor = s.m_fillColor;
}


Shape& Shape::operator=(const Shape& s)
{
    if (this != &s){
        this->m_x = s.m_x;
        this->m_y = s.m_y;
        this->m_fillColor = s.m_fillColor;
    }
    return *this;
}
Shape::~Shape()
{
}

//Getters and Setters
int Shape::getX(){
    return m_x;
}

int Shape::getY(){
    return m_y;
}

FillColor Shape::getFillColor(){
    return m_fillColor;
}

void Shape::setX(int x){
    m_x = x;
}

void Shape::setY(int y){
    m_y = y;
}

std::ostream& Shape::inserter(std::ostream& out)const{
    return out << "x: " << m_x << "\ny: " << m_y << std::endl;
}

std::ostream &operator<<(std::ostream & out,const Shape & s){
    return s.inserter(out);
}

