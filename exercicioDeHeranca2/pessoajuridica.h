#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <pessoa.h>

namespace wictor{
class PessoaJuridica:public Pessoa
{
private:
    QString cnpj;
    QString razaoSocial;
public:
    PessoaJuridica();
    QString getCnpj() const;
    void setCnpj(const QString Cnpj);
    QString getRazaoSocial() const;
    void setRazaoSocial(const QString RazaoSocial);
    virtual double calcularImposto() override;
};
}
#endif // PESSOAJURIDICA_H
