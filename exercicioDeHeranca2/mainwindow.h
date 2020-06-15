#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <pessoafisica.h>
#include <pessoajuridica.h>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_pessoaFisica_clicked();

    void on_radioButton_pessoaJuridica_clicked();

    void on_pushButton_submeter_clicked();

    void on_pushButton_limpar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
