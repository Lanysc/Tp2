#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include <pessoa.h>

namespace wictor {
class PessoaFisica:public Pessoa
{
private:
    QString cpf;
    QString sexo;
public:
    PessoaFisica();
    QString getCpf() const;

    void setCpf(const QString Cpf);
    QString getSexo() const;

    void setSexo(const QString Sexo);
    virtual double calcularImposto() override;
};
}
#endif // PESSOAFISICA_H
