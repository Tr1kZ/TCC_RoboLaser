#include "ponto.h"

Ponto::Ponto(float x_n, float y_n)
{
    x = x_n, y = y_n;
    on_off = false;
}

float Ponto::X()
{
    return x;
}
float Ponto::Y()
{
    return y;
}
void Ponto::setX(float x_n)
{
    x = x_n;
}
void Ponto::setY(float y_n)
{
    y = y_n;
}
bool Ponto::on()
{
    return on_off;
}
void Ponto::setOn(bool on_n)
{
    on_off = on_n;
}
