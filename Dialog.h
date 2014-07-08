#ifndef DIALOG_H
#define DIALOG_H

#include <memory>
#include <QDialog>
#include <QStandardItemModel>
#include "City.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_citiesComboBox_currentTextChanged(const QString &nameOfCity);

    void slotFillTable( );

private:
    Ui::Dialog *ui;
    std::unique_ptr<QStandardItemModel> m_model;
    City m_city;
};

#endif // DIALOG_H
