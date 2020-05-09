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
        Atext = Calc_Objekt.getAtext(); //Schichten Get Methode um als Ergebniß Atext aus der Calc zurück zu bekommen
        ui->Ausgabe->setText(Atext); // schreibt den Text (Durchmesser) in Ausgabe
}
