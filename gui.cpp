#include "gui.h"
#include "ui_gui.h"
#include <QDebug>


GUI::GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GUI)
{
    ui->setupUi(this);
}

GUI::~GUI()
{
    delete ui;
}


void GUI::on_RechneKnopf_clicked()
{
        R = ui->Eingabe->toPlainText(); // holt sich R aus dem Feld Eingabe in der ui
        qDebug()<<"R=:" << R;

        Calc_Objekt.setR(R); //Schichten Methode hinzugefuegt die Start an die DV übergibt
        Calc_Objekt.Berechne_Durchmesser(); //Schichten Ruft die einzelne Methode zum berechnen in der Calc auf
        //CaPreisEw = Calc_Objekt.getPreisEw();




        //Radius = (R).toFloat(); // R ist Text und wird hier zu Zahl (typ float) und heißt Radius
        //qDebug()<<"Radius=:" << Radius;
        //Durchmesser = Radius*2*3.14; // Berechnet den Durchmesser
        //Atext=QString::number(Durchmesser);  // wandelt den Durchmesser (typ float) wieder in Text
        ui->Ausgabe->setText(Atext); // schreibt den Text (Durchmesser) in Ausgabe
}
