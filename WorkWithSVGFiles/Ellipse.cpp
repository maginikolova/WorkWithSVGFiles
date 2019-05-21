#include "Ellipse.h"

Ellipse::Ellipse(int cx, int cy, int rx, int ry, FillColor fill)
    :Shape(cx, cy, fill), m_rx(rx), m_ry(ry)
{

}

Ellipse::Ellipse(const Ellipse& e):Shape(e)
{
    m_rx = e.m_rx;
    m_ry = e.m_ry;
}

Ellipse& Ellipse::operator=(const Ellipse& e)
{
    if (this != &e){
        this->setCx(getCx());
        this->setCy(getCy());
        this->setRx(getRx());
        this->setRy(getRy());
    }
    return *this;
}

Ellipse::~Ellipse()
{

}

void Ellipse::setCx(int cx){
    this->m_x = cx;
}

void Ellipse::setCy(int cy){
    this->m_y = cy;
}

void Ellipse::setRx(int rx){
    m_rx = rx;
}

void Ellipse::setRy(int ry){
    m_ry = ry;
}

int Ellipse::getCx(){
    return m_x;
}

int Ellipse::getCy(){
    return m_y;
}

int Ellipse::getRx(){
    return m_rx;
}

int Ellipse::getRy(){
    return m_ry;
}
