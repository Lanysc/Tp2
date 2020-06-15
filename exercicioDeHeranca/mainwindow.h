#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <estudante.h>
#include <trabalhador.h>
#include <graduado.h>
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
    void on_pushButton_estudante_clicked();

    void on_pushButton_trabalhador_clicked();

    void on_pushButton_graduado_clicked();

    void on_pushButton_submeter_clicked();

    void on_pushButton_limpar_clicked();

private:
    Ui::MainWindow *ui;
    bool est,grad,trab;
};
#endif // MAINWINDOW_H
