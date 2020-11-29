#include "addemployee.h"
#include "ui_addemployee.h"

addemployee::addemployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addemployee)
{
    ui->setupUi(this);
}

addemployee::~addemployee()
{
    delete ui;
}

void addemployee::Show()
{
    this->show();
}


void addemployee::resetElements()
{
    ui->txtName->clear();
    ui->txtQuantity->clear();
    ui->txtDOP->clear();
    ui->txtDOS->clear();
}



void addemployee::on_btnAdd1_clicked()
{
    ui->lblInfo->setText("");
    QString sName = ui->txtName->text();
    QString sQuantity = ui->txtQuantity->text();
    QString sDOP = ui->txtDOP->text();
    QString sDOS = ui->txtDOS->text();
   QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("INSERT INTO employedetailss(Name, Salary, Designation, Phoneno) VALUES ('"+sName +"','"+sQuantity + "','" +sDOP + "','"+ sDOS+"')");
    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText("Unable to Add Item");
    }
    else
    {
        if(query.numRowsAffected() > 0)
        {
            qDebug() <<"read was successful "<< query.lastQuery();
            ui->lblInfo->setText("Item Added Successfully!");
            resetElements();
            QWidget::close();
        }
        else
            qDebug() <<"Unable to Add new Item";
     }
}

void addemployee::on_btnAdd1_2_clicked()
{
    QWidget::close();
}
