#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , quantidade(0)
{
    ui->setupUi(this);
    ui->textEditResultado->setReadOnly(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonHomem_clicked()
{
    Wictor::Homem* aux;
    aux = new Wictor::Homem;
    animais[quantidade] = aux;
    QString saida;
    quantidade++;
    if(quantidade == 10) {
        for(int i = 0; i < 10;i++){
            saida += animais[i]->print();
        }
        ui->pushButtonCao->setDisabled(1);
        ui->pushButtonGato->setDisabled(1);
        ui->pushButtonHomem->setDisabled(1);
    }
    ui->textEditResultado->setText(saida);
    saida = QString::number(quantidade) + " Itens no vetor";

    ui->labelItens->setText(saida);
}

void MainWindow::on_pushButtonCao_clicked()
{
    Wictor::Cao* aux;
    aux = new Wictor::Cao;
    animais[quantidade] = aux;
    QString saida;
    quantidade++;
    if(quantidade == 10) {
        for(int i = 0; i < 10;i++){
            saida += animais[i]->print();
        }
        ui->pushButtonCao->setDisabled(1);
        ui->pushButtonGato->setDisabled(1);
        ui->pushButtonHomem->setDisabled(1);
    }
    ui->textEditResultado->setText(saida);
    saida = QString::number(quantidade) + " Itens no vetor";

    ui->labelItens->setText(saida);
}

void MainWindow::on_pushButtonGato_clicked()
{
    Wictor::Gato* aux;
    aux = new Wictor::Gato;
    animais[quantidade] = aux;
    QString saida;
    quantidade++;
    if(quantidade == 10) {
        for(int i = 0; i < 10;i++){
            saida += animais[i]->print();
        }
        ui->pushButtonCao->setDisabled(1);
        ui->pushButtonGato->setDisabled(1);
        ui->pushButtonHomem->setDisabled(1);
    }
    ui->textEditResultado->setText(saida);
    saida = QString::number(quantidade) + " Itens no vetor";

    ui->labelItens->setText(saida);
}

void MainWindow::on_pushButtonLimpar_clicked()
{
    ui->textEditResultado->clear();
    quantidade = 0;
    ui->pushButtonCao->setDisabled(0);
    ui->pushButtonGato->setDisabled(0);
    ui->pushButtonHomem->setDisabled(0);
    ui->textEditResultado->clear();
    QString saida = QString::number(quantidade) + " Itens no vetor";
    ui->labelItens->setText(saida);
}
