#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class Employee;
}

class Employee : public QDialog
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();
    void Show();

private slots:

private:
    Ui::Employee *ui;
    void resetElements();

};

#endif // ADDITEM_H
