#include "employeedetails.h"
#include "ui_employeedetails.h"

employeedetails::employeedetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeedetails)
{
    ui->setupUi(this);
}

employeedetails::~employeedetails()
{
    delete ui;
}

void employeedetails::Show()
{
    updateUI();
    this->show();
}

void employeedetails::updateUI()
{
       qDebug() << "in init()";
       QSqlQueryModel * model = new QSqlQueryModel(this);

       QSqlQuery query( MyDB::getInstance()->getDBInstance());
    //   query.prepare("select * from employedetailss order by Id asce");
       query.prepare("select * from employedetailss order by Id desc");

       if(!query.exec())
          qDebug() << query.lastError().text() << query.lastQuery();
       else
          qDebug() << "== success query fetch()";

       while(query.next())
       qDebug()<<query.value(0).toString();

       model->setQuery(query);
       ui->tableView->setModel(model);
       qDebug() << "rows are : " << model->rowCount();
       ui->tableView->show();
}


void employeedetails::on_pushButton_clicked()
{
    QWidget::close();
}
