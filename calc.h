#ifndef CALC_H
#define CALC_H
#include <QString> //Schichten
#include "dv.h" //Schichten2


class Calc
{
public:
    Calc();
    void setR(QString R); // Methode hinzugefuegt die R aus Gui übernimmt
    void Berechne_Durchmesser();
    QString getAtext(); // Get Methode um den Durchmesser an Gui zurück zu geben


private:

    dv dv_objekt; //Schichten2

    float Radius;
    float Durchmesser;
    QString Rc;
    QString Atext;

};

#endif // CALC_H
