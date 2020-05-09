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
        R = ui->Eingabe->toPlainText();
        qDebug()<<"R=:" << R;
        Radius = QString(R).toFloat();
        qDebug()<<"Radius=:" << Radius;
        Durchmesser = Radius*2*3.14;
        QString Atext=QString::number(Durchmesser);
        ui->Ausgabe->setText(Atext);
}
