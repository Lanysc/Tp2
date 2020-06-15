#include "trabalhador.h"


namespace wictor{
Trabalhador::Trabalhador()
{
}

QString Trabalhador::getFuncao() const
{
    return funcao;
}

void Trabalhador::setFuncao(const QString Funcao)
{
    for (int i = 0; i < (int)Funcao.size(); i++){
        if(!Funcao[i].isLetter()) throw QString("Funcao Invalida");
    }
    funcao = Funcao;
}

QString Trabalhador::getDepartamento() const
{
    return departamento;
}

void Trabalhador::setDepartamento(const QString Departamento)
{
    departamento = Departamento;
}

QString Trabalhador::getSalario() const
{
    return salario;
}

void Trabalhador::setSalario(const QString Salario)
{
    int aux = Salario.toInt();
    if (aux <= 0 ) throw QString ("Salario Invalido");
    salario = Salario;
}
}
