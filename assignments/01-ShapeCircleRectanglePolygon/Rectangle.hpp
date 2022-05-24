#pragma once
#include "Shape.hpp"

class Rectangle:public Shape
{
    private:
        int Alto;
        int Ancho;
    public:
        Rectangle();
        Rectangle(int, int);

        int getAlto();
        int getAncho();
};