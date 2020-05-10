#include "calc.h"
#include <QDebug>



Calc::Calc()
{
}

void Calc::setR(QString R)
{
    Rc = R;
    //qDebug()<<"RadiusC=:" << R;
}

void Calc::Berechne_Durchmesser()
    {
    Radius = (Rc).toFloat(); // R ist Text und wird hier zu Zahl (typ float) und heißt Radius
    qDebug()<<"Radius=:" << Radius;
    float pi=dv_objekt.get_pi();
    Durchmesser = Radius*2*pi; // Berechnet den Durchmesser
    qDebug()<<"Durchm=:" << Durchmesser;
    Atext=QString::number(Durchmesser);  // wandelt den Durchmesser (typ float) wieder in Text
    qDebug()<<"DurchmText=:" << Atext;
    }

 QString  Calc::getAtext()
    {
    return Atext;
    }
