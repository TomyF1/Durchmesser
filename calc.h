#ifndef CALC_H
#define CALC_H
#include <QString> //Schichten


class Calc
{
public:
    Calc();
    void setR(QString R); // Methode hinzugefuegt die R aus Gui übernimmt
    void Berechne_Durchmesser();
    QString getAtext();

private:

    float Radius;
    float Durchmesser;
    QString Rc;
    QString Atext;

};

#endif // CALC_H
