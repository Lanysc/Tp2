#include "pessoajuridica.h"

namespace wictor{
QString PessoaJuridica::getCnpj() const
{
    return cnpj;
}

void PessoaJuridica::setCnpj(const QString Cnpj)
{
    for (int i = 0; i < (int)Cnpj.size();i++)
        if(!Cnpj[i].isNumber()) throw QString("Cnpj invalido, Digite somente os numeros");
    cnpj = Cnpj;
}

QString PessoaJuridica::getRazaoSocial() const
{
    return razaoSocial;
}

void PessoaJuridica::setRazaoSocial(const QString RazaoSocial)
{
    razaoSocial = RazaoSocial;
}

double PessoaJuridica::calcularImposto(){
    return getRendaBruta() * 0.08;
}
PessoaJuridica::PessoaJuridica()
{   
}
}
