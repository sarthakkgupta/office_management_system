#ifndef ADDEMPLOYEE_H
#define ADDEMPLOYEE_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class addemployee;
}

class addemployee : public QDialog
{
    Q_OBJECT

public:
    explicit addemployee(QWidget *parent = nullptr);
    ~addemployee();
    void Show();

private slots:


    void on_btnAdd1_clicked();

    void on_btnAdd1_2_clicked();

private:
    Ui::addemployee *ui;
    void resetElements();

};

#endif // ADDITEM_H
