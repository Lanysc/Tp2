#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <pessoa.h>
namespace wictor {
class Trabalhador:public Pessoa
{
private:
    QString funcao;
    QString departamento;
    QString salario;
public:
    Trabalhador();
    QString getFuncao() const;
    void setFuncao(const QString Funcao);
    QString getDepartamento() const;
    void setDepartamento(const QString Departamento);
    QString getSalario() const;
    void setSalario(const QString Salario);
};
}

#endif // TRABALHADOR_H
