#ifndef ITEMSREPORT_H
#define ITEMSREPORT_H

#include <QDialog>
#include "mydb.h"
#include <QSqlQueryModel>

namespace Ui {
class ItemsReport;
}

class ItemsReport : public QDialog
{
    Q_OBJECT

public:
    explicit ItemsReport(QWidget *parent = nullptr);
    ~ItemsReport();
    void Show();

private slots:
    void on_pushButton_clicked();




private:
    Ui::ItemsReport *ui;
    void updateUI();
};

#endif // ITEMSREPORT_H
