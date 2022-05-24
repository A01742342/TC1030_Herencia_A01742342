#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape{}
{
    Ancho = 0;
    Alto = 0;
}

Rectangle::Rectangle(int Alto, int Ancho) : Shape{Alto, Ancho}
{
    this->Ancho = Ancho;
    this->Alto = Alto;
}

int Rectangle::getAlto()
{
    return this->Alto;
}

int Rectangle::getAncho()
{
    return this->Ancho;
}