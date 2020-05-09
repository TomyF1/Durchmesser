#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QLineEdit> // Ermöglicht Text Ein und Ausgaben

#include "calc.h" // Schichten includiert den Calc Header

QT_BEGIN_NAMESPACE
namespace Ui { class GUI; }
QT_END_NAMESPACE

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    GUI(QWidget *parent = nullptr);
    ~GUI();

private slots:
    void on_RechneKnopf_clicked();

private:
    Ui::GUI *ui;

    Calc Calc_Objekt;  // Schichten erlaubt es in der Calc ein Objekt anzusprechen

    QString R;
    QString Atext;

//    float Radius;  // Schichten in GUI nicht benötigt
//    float Durchmesser; // Schichten in GUI nicht benötigt

};
#endif // GUI_H
