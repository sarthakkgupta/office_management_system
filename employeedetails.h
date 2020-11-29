#ifndef EMPLOYEEDETAILS_H
#define EMPLOYEEDETAILS_H

#include <QDialog>
#include "mydb.h"
#include <QSqlQueryModel>

namespace Ui {
class employeedetails;
}

class employeedetails : public QDialog
{
    Q_OBJECT

public:
    explicit employeedetails(QWidget *parent = nullptr);
    ~employeedetails();
    void Show();

private slots:
    void on_pushButton_clicked();

private:
    Ui::employeedetails*ui;
    void updateUI();
};

#endif // EMPLOYEEDETAILS_H
