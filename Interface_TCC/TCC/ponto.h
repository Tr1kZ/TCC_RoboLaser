#ifndef PONTO_H
#define PONTO_H


class Ponto
{
public:
    Ponto(float, float);
    float X();
    void setX(float);
    float Y();
    void setY(float );
    bool on();
    void setOn(bool);
private:
    float x, y;
    bool on_off;
};

#endif // PONTO_H
