#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <animal.h>
#include <gato.h>
#include <cao.h>
#include <homem.h>

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
    void on_pushButtonHomem_clicked();

    void on_pushButtonCao_clicked();

    void on_pushButtonGato_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::MainWindow *ui;
    Wictor::Animal* animais[10];
    int quantidade;
};
#endif // MAINWINDOW_H
