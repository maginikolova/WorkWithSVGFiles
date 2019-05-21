#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse: public Shape
{
private:
    int m_rx, m_ry;

public:
    Ellipse(int=0, int=0, int=0, int=0, FillColor=notSet);
    Ellipse(const Ellipse&);
    Ellipse& operator=(const Ellipse&);
    ~Ellipse();
    void setCx(int);
    void setCy(int);
    void setRx(int);
    void setRy(int);
    int getCx();
    int getCy();
    int getRx();
    int getRy();
};

#endif // ELLIPSE_H
