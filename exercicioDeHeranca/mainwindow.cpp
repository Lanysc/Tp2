#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_campus->setReadOnly(1);
    ui->lineEdit_funcao->setReadOnly(1);
    ui->lineEdit_salario->setReadOnly(1);
    ui->lineEdit_matricula->setReadOnly(1);
    ui->lineEdit_anoConclusao->setReadOnly(1);
    ui->lineEdit_departamento->setReadOnly(1);
    ui->lineEdit_numeroDiploma->setReadOnly(1);
    ui->lineEdit_anoColacaoGrau->setReadOnly(1);
    ui->lineEdit_curso->setReadOnly(1);
    ui->pushButton_submeter->setDisabled(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_estudante_clicked()
{
    est = true;
    grad = false;
    trab = false;

    ui->lineEdit_matricula->setReadOnly(0);
    ui->lineEdit_curso->setReadOnly(0);
    ui->lineEdit_campus->setReadOnly(0);
    ui->lineEdit_funcao->setReadOnly(1);
    ui->lineEdit_salario->setReadOnly(1);
    ui->lineEdit_anoConclusao->setReadOnly(1);
    ui->lineEdit_departamento->setReadOnly(1);
    ui->lineEdit_numeroDiploma->setReadOnly(1);
    ui->lineEdit_anoColacaoGrau->setReadOnly(1);

    ui->lineEdit_funcao->clear();
    ui->lineEdit_salario->clear();
    ui->lineEdit_anoConclusao->clear();
    ui->lineEdit_departamento->clear();
    ui->lineEdit_numeroDiploma->clear();
    ui->lineEdit_anoColacaoGrau->clear();

    ui->pushButton_submeter->setDisabled(0);

}

void MainWindow::on_pushButton_trabalhador_clicked()
{
    est = false;
    grad = false;
    trab = true;

    wictor::Trabalhador trabalhador;
    ui->lineEdit_matricula->setReadOnly(1);
    ui->lineEdit_curso->setReadOnly(1);
    ui->lineEdit_campus->setReadOnly(1);
    ui->lineEdit_funcao->setReadOnly(0);
    ui->lineEdit_salario->setReadOnly(0);
    ui->lineEdit_anoConclusao->setReadOnly(1);
    ui->lineEdit_departamento->setReadOnly(0);
    ui->lineEdit_numeroDiploma->setReadOnly(1);
    ui->lineEdit_anoColacaoGrau->setReadOnly(1);

    ui->lineEdit_matricula->clear();
    ui->lineEdit_curso->clear();
    ui->lineEdit_anoConclusao->clear();
    ui->lineEdit_campus->clear();
    ui->lineEdit_numeroDiploma->clear();
    ui->lineEdit_anoColacaoGrau->clear();



    ui->pushButton_submeter->setDisabled(0);
}

void MainWindow::on_pushButton_graduado_clicked()
{
    est = false;
    grad = true;
    trab = false;

    ui->lineEdit_matricula->setReadOnly(1);
    ui->lineEdit_curso->setReadOnly(1);
    ui->lineEdit_campus->setReadOnly(1);
    ui->lineEdit_funcao->setReadOnly(1);
    ui->lineEdit_salario->setReadOnly(1);
    ui->lineEdit_anoConclusao->setReadOnly(0);
    ui->lineEdit_departamento->setReadOnly(1);
    ui->lineEdit_numeroDiploma->setReadOnly(0);
    ui->lineEdit_anoColacaoGrau->setReadOnly(0);

    ui->lineEdit_matricula->clear();
    ui->lineEdit_curso->clear();
    ui->lineEdit_funcao->clear();
    ui->lineEdit_campus->clear();
    ui->lineEdit_departamento->clear();
    ui->lineEdit_salario->clear();

    ui->pushButton_submeter->setDisabled(0);

}

void MainWindow::on_pushButton_submeter_clicked()
{
    try {

    QString Resultado;
    if (est){
        wictor::Estudante estudante;
        estudante.setNome(ui->lineEdit_nome->text());
        estudante.setEndereco(ui->lineEdit_endereco->text());
        estudante.setTelefone(ui->lineEdit_telefone->text());
        estudante.setEmail(ui->lineEdit_email->text());
        estudante.setMatricula(ui->lineEdit_matricula->text());
        estudante.setCurso(ui->lineEdit_curso->text());
        estudante.setCampus(ui->lineEdit_campus->text());

        Resultado = "Nome: ";
        Resultado += estudante.getNome();
        Resultado += "\nEndereco: ";
        Resultado += estudante.getEndereco();
        Resultado += "\nTelefone: ";
        Resultado += estudante.getTelefone();
        Resultado += "\nEmail: ";
        Resultado += estudante.getEmail();
        Resultado += "\nMatricula: ";
        Resultado += estudante.getMatricula();
        Resultado += "\nCurso: ";
        Resultado += estudante.getCurso();
        Resultado += "\nCampus: ";
        Resultado += estudante.getCampus();
    }
    else if (trab){
        wictor::Trabalhador trabalhador;
        trabalhador.setNome(ui->lineEdit_nome->text());
        trabalhador.setEndereco(ui->lineEdit_endereco->text());
        trabalhador.setTelefone(ui->lineEdit_telefone->text());
        trabalhador.setEmail(ui->lineEdit_email->text());
        trabalhador.setFuncao(ui->lineEdit_funcao->text());
        trabalhador.setDepartamento(ui->lineEdit_departamento->text());
        trabalhador.setSalario(ui->lineEdit_salario->text());

        Resultado = "Nome: ";
        Resultado += trabalhador.getNome();
        Resultado += "\nEndereco: ";
        Resultado += trabalhador.getEndereco();
        Resultado += "\nTelefone: ";
        Resultado += trabalhador.getTelefone();
        Resultado += "\nEmail: ";
        Resultado += trabalhador.getEmail();
        Resultado += "\nFuncao: ";
        Resultado += trabalhador.getFuncao();
        Resultado += "\nDepartamento: ";
        Resultado += trabalhador.getDepartamento();
        Resultado += "\nSalario: ";
        Resultado += trabalhador.getSalario();
    }
    else{
        wictor::Graduado graduado;

        graduado.setNome(ui->lineEdit_nome->text());
        graduado.setEndereco(ui->lineEdit_endereco->text());
        graduado.setTelefone(ui->lineEdit_telefone->text());
        graduado.setEmail(ui->lineEdit_email->text());
        graduado.setAnoConclusao(ui->lineEdit_anoConclusao->text());
        graduado.setNumeroDiploma(ui->lineEdit_numeroDiploma->text());
        graduado.setAnoColacaoGrau(ui->lineEdit_anoColacaoGrau->text());

        Resultado = "Nome: ";
        Resultado += graduado.getNome();
        Resultado += "\nEndereco: ";
        Resultado += graduado.getEndereco();
        Resultado += "\nTelefone: ";
        Resultado += graduado.getTelefone();
        Resultado += "\nEmail: ";
        Resultado += graduado.getEmail();
        Resultado += "\nAno de Conclusao: ";
        Resultado += graduado.getAnoConclusao();
        Resultado += "\nDiploma: ";
        Resultado += graduado.getNumeroDiploma();
        Resultado += "\nAno de colacao de grau: ";
        Resultado += graduado.getAnoColacaoGrau();
    }
    ui->textEdit_resultado->setText(Resultado);
    } catch (QString &erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

void MainWindow::on_pushButton_limpar_clicked()
{
    ui->lineEdit_campus->setReadOnly(1);
    ui->lineEdit_funcao->setReadOnly(1);
    ui->lineEdit_salario->setReadOnly(1);
    ui->lineEdit_matricula->setReadOnly(1);
    ui->lineEdit_anoConclusao->setReadOnly(1);
    ui->lineEdit_departamento->setReadOnly(1);
    ui->lineEdit_numeroDiploma->setReadOnly(1);
    ui->lineEdit_anoColacaoGrau->setReadOnly(1);
    ui->lineEdit_curso->setReadOnly(1);

    ui->lineEdit_nome->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_endereco->clear();
    ui->lineEdit_telefone->clear();
    ui->lineEdit_matricula->clear();
    ui->lineEdit_curso->clear();
    ui->lineEdit_campus->clear();
    ui->lineEdit_funcao->clear();
    ui->lineEdit_departamento->clear();
    ui->lineEdit_salario->clear();

    ui->lineEdit_anoConclusao->clear();
    ui->lineEdit_numeroDiploma->clear();
    ui->lineEdit_anoColacaoGrau->clear();
    ui->pushButton_submeter->setDisabled(1);
}
