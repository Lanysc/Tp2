#include "pessoafisica.h"

namespace wictor{
PessoaFisica::PessoaFisica()
{

}

QString PessoaFisica::getCpf() const
{
    return cpf;
}

void PessoaFisica::setCpf(const QString Cpf)
{
    if((int)Cpf.size() != 11 )  throw QString("Cpf Invalido");
    for (int i = 0; i < (int)Cpf.size();i++)
        if(!Cpf[i].isNumber()) throw QString("Cpf invalido, Digite somente os numeros");
    cpf = Cpf;
}

QString PessoaFisica::getSexo() const
{
    return sexo;
}

void PessoaFisica::setSexo(const QString Sexo)
{
    for (int i = 0; i < (int)Sexo.size();i++)
        if(!Sexo[i].isNumber())
    if(Sexo != "masculino" && Sexo != "feminino" && Sexo != "outro") throw QString("Por favor preecha com 'masculino', 'feminino' ou 'outro'");
    sexo = Sexo;
}

double PessoaFisica::calcularImposto(){
    if(getRendaBruta() <= 1903.98)
        return 0;
    if(getRendaBruta() <= 2826.65)
        return getRendaBruta() * 0.075;
    if(getRendaBruta() <= 3751.05)
        return getRendaBruta() * 0.15;
    if(getRendaBruta() <= 4664.68)
        return getRendaBruta() * 0.225;

    return getRendaBruta() * 0.275;

}
}
