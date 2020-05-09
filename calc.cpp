#include "calc.h"
#include <QDebug>



Calc::Calc()
{

}

void Calc::setR(QString R)
{
    R = Rc;
    qDebug()<<"RadiusC=:" << R;
}


void Calc::Berechne_Durchmesser()
    {
    Radius = (Rc).toFloat(); // R ist Text und wird hier zu Zahl (typ float) und heißt Radius
    qDebug()<<"Radius=:" << Radius;
    Durchmesser = Radius*2*3.14; // Berechnet den Durchmesser
    }

