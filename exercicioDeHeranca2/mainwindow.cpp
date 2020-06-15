#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_razaoSocial->setDisabled(1);
    ui->lineEdit_cnpj->setDisabled(1);
    ui->lineEdit_cpf->setDisabled(1);
    ui->lineEdit_sexo->setDisabled(1);
    ui->pushButton_submeter->setDisabled(1);
    ui->textEdit_resultado->setReadOnly(1);
}

MainWindow::~MainWindow()
{
    delete ui;  
}


void MainWindow::on_radioButton_pessoaFisica_clicked()
{
    ui->lineEdit_cnpj->clear();
    ui->lineEdit_razaoSocial->clear();
    ui->lineEdit_razaoSocial->setDisabled(1);
    ui->lineEdit_cnpj->setDisabled(1);

    ui->lineEdit_cpf->setDisabled(0);
    ui->lineEdit_sexo->setDisabled(0);
    ui->pushButton_submeter->setDisabled(0);
}

void MainWindow::on_radioButton_pessoaJuridica_clicked()
{
    ui->lineEdit_cpf->clear();
    ui->lineEdit_sexo->clear();
    ui->lineEdit_cpf->setDisabled(1);
    ui->lineEdit_sexo->setDisabled(1);

    ui->lineEdit_razaoSocial->setDisabled(0);
    ui->lineEdit_cnpj->setDisabled(0);
    ui->pushButton_submeter->setDisabled(0);
}

void MainWindow::on_pushButton_submeter_clicked()
{
    try {

    QString resultado;
    wictor::PessoaFisica pessoaFisica;
    wictor::PessoaJuridica pessoaJuridica;

    if(ui->radioButton_pessoaFisica->isChecked()){
        pessoaFisica.setNome(ui->lineEdit_nome->text());
        resultado = "Nome: ";
        resultado += pessoaFisica.getNome();
        pessoaFisica.setEndereco(ui->lineEdit_endereco->text());
        resultado += "\nEndereco: ";
        resultado += pessoaFisica.getEndereco();
        pessoaFisica.setTelefone(ui->lineEdit_telefone->text());
        resultado += "\ntelefone: ";
        resultado += pessoaFisica.getTelefone();
        pessoaFisica.setEmail(ui->lineEdit_email->text());
        resultado += "\nemail: ";
        resultado += pessoaFisica.getEmail();
        pessoaFisica.setRendaBruta(ui->lineEdit_rendaBruta->text().toDouble());
        resultado += "\nRenda Bruta: ";
        resultado += QString::number(pessoaFisica.getRendaBruta());
        pessoaFisica.setCpf(ui->lineEdit_cpf->text());
        resultado += "\nCpf: ";
        resultado += pessoaFisica.getCpf();
        pessoaFisica.setSexo(ui->lineEdit_sexo->text().toLower());
        resultado += "\nSexo: ";
        resultado += pessoaFisica.getSexo();
        resultado += "\nImposto de Renda: ";
        resultado += QString::number(pessoaFisica.calcularImposto());
    }
    else if (ui->radioButton_pessoaJuridica->isChecked()){
        pessoaJuridica.setNome(ui->lineEdit_nome->text());
        resultado = "Nome: ";
        resultado += pessoaJuridica.getNome();
        pessoaJuridica.setEndereco(ui->lineEdit_endereco->text());
        resultado += "\nEndereco: ";
        resultado += pessoaJuridica.getEndereco();
        pessoaJuridica.setTelefone(ui->lineEdit_telefone->text());
        resultado += "\ntelefone: ";
        resultado += pessoaJuridica.getTelefone();
        pessoaJuridica.setEmail(ui->lineEdit_email->text());
        resultado += "\nemail: ";
        resultado += pessoaFisica.getEmail();
        pessoaJuridica.setRendaBruta(ui->lineEdit_rendaBruta->text().toDouble());
        resultado += "\nRenda Bruta: ";
        resultado += QString::number(pessoaJuridica.getRendaBruta());
        pessoaJuridica.setCnpj(ui->lineEdit_cnpj->text());
        resultado += "\nCNPJ: ";
        resultado += pessoaJuridica.getCnpj();
        pessoaJuridica.setRazaoSocial(ui->lineEdit_razaoSocial->text());
        resultado += "\nRazao Social: ";
        resultado += pessoaJuridica.getRazaoSocial();
        resultado += "\nImposto de Renda: ";
        resultado += QString::number(pessoaJuridica.calcularImposto());
    }
    ui->textEdit_resultado->setText(resultado);
    } catch (QString &erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void MainWindow::on_pushButton_limpar_clicked()
{
    ui->lineEdit_razaoSocial->setDisabled(1);
    ui->lineEdit_cnpj->setDisabled(1);
    ui->lineEdit_cpf->setDisabled(1);
    ui->lineEdit_sexo->setDisabled(1);
    ui->pushButton_submeter->setDisabled(1);

    ui->lineEdit_razaoSocial->clear();
    ui->lineEdit_cnpj->clear();
    ui->lineEdit_cpf->clear();
    ui->lineEdit_sexo->clear();
    ui->lineEdit_nome->clear();
    ui->lineEdit_endereco->clear();
    ui->lineEdit_telefone->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_rendaBruta->clear();
    ui->textEdit_resultado->clear();

}
