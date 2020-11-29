#include "employeeitem.h"
#include "ui_employeeitem.h"

EmployeeItem::EmployeeItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeItem)
{
    ui->setupUi(this);
    ptraddemployee = new addemployee(this);
    ptremployeedetails = new employeedetails(this);

}

EmployeeItem::~EmployeeItem()
{
    delete ui;
    delete ptraddemployee;
    delete ptremployeedetails;
}

void EmployeeItem::on_NewEmployee_clicked()
{
    ptraddemployee->show();
}

void EmployeeItem::on_ViewEmployee_clicked()
{
    ptremployeedetails->show();

}
