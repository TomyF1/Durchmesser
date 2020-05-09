#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QLineEdit>

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

    QString R;
    QString Atext;

    float Radius;
    float Durchmesser;

};
#endif // GUI_H
