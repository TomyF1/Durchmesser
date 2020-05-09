#ifndef CALC_H
#define CALC_H
#include <QString> //Schichten


class Calc
{
public:
    Calc();
    void setR(QString R); // Methode hinzugefuegt die R aus Gui übernimmt
    void Berechne_Durchmesser();

private:

    float Radius;
    float Durchmesser;
    QString Rc;
};

#endif // CALC_H
