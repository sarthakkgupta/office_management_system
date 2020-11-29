#ifndef EMPLOYEEITEM_H
#define EMPLOYEEITEM_H

#include <QDialog>
#include <addemployee.h>
#include <employeedetails.h>
namespace Ui {
class EmployeeItem;
}

class EmployeeItem : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeItem(QWidget *parent = nullptr);
    ~EmployeeItem();

private slots:
    void on_NewEmployee_clicked();

    void on_ViewEmployee_clicked();

private:
    Ui::EmployeeItem *ui;
    addemployee *ptraddemployee;
    employeedetails *ptremployeedetails;
};

#endif // EMPLOYEEITEM_H
