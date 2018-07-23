#ifndef VERIF_H
#define VERIF_H
#include<string>
#include <QMainWindow>
#include<QPushButton>
namespace Ui {
class Verif;
}

class Verif : public QMainWindow
{
    Q_OBJECT

public:
    explicit Verif(QWidget *parent = 0);



      ~Verif();



public slots:
   void on_monButton_clicked();


private:
    Ui::Verif *ui;
public :
    int c;
       QStringList tab;
};

#endif // VERIF_H
