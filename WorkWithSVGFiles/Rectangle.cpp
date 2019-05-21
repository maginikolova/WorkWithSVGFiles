#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height, FillColor fill)
    :Shape(x,y,fill),m_width(width),m_height(height)
{
}

Rectangle::Rectangle(const Rectangle& r)
    :Shape(r)
{
    m_width = r.m_width;
    m_height = r.m_height;
}

Rectangle& Rectangle::operator=(const Rectangle& r)
{
    if (this != &r){
        m_x = r.m_x;
        m_y = r.m_y;
        m_fillColor = r.m_fillColor;
        m_width = r.m_width;
        m_height = r.m_height;
    }
    return *this;
}

Rectangle::~Rectangle()
{
    //dtor
}

int Rectangle::getWidth(){
    return m_width;
}

int Rectangle::getHeight(){

    return m_height;
}
void Rectangle::setWidth(int width){
    m_width = width;
}

void Rectangle::setHeight(int height){
    m_height = height;
}


