#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include <QInputDialog>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_productShow_triggered();

    void on_categoryShow_triggered();

    void on_countryShow_triggered();

    void on_manufacturerShow_triggered();

    void on_receiptShow_triggered();

    void on_customerShow_triggered();

    void addRow();

    void on_pushButton_clicked();

    void saveChanges();

    void on_actionId_triggered();

    void on_actionName_triggered();

    void on_actionPrice_triggered();

    void on_actionCount_triggered();

    void on_actionManufacturer_triggered();

    void on_actionCountry_2_triggered();

    void on_actionCategory_2_triggered();

    void on_actionName_Surname_triggered();

    void on_actionCity_triggered();

private:
    Ui::MainWindow *ui;

    QSqlDatabase autoPartsDB;
    QSqlRelationalTableModel *model;
};

#endif // MAINWINDOW_H
