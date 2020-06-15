#include "pessoa.h"

namespace wictor{
QString Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString Nome)
{
    for (int i = 0; i < (int)Nome.size(); i++){
        if(!Nome[i].isLetter()) throw QString("Nome Invalido");
    }
    nome = Nome;
}

QString Pessoa::getEndereco() const
{
    return endereco;
}

void Pessoa::setEndereco(const QString Endereco)
{
    endereco = Endereco;
}

QString Pessoa::getTelefone() const
{
    return telefone;
}

void Pessoa::setTelefone(const QString Telefone)
{
    for (int i = 0; i < (int)Telefone.size(); i++){
        if(Telefone[i] < '0' or Telefone[i] > '9') throw QString("Telefone Invalido");
    }
    telefone = Telefone;
}

void Pessoa::setEmail(const QString Email)
{
    bool arroba = false;
    for (int i = 0; i < (int)Email.size(); i++){
        if (Email[i] == '@')
            arroba = true;
        if(Email[i] == '@' && i != (int)Email.size()-1 && !Email[i+1].isLetter()) throw QString("Email Invalido");
    }
    if(!arroba) throw QString("Email Invalido");
    email = Email;
}

QString Pessoa::getEmail() const
{
    return email;
}

double Pessoa::getRendaBruta() const
{
    return rendaBruta;
}

void Pessoa::setRendaBruta(double RendaBruta)
{
    if(RendaBruta < 0) throw QString("Renda invalida");
    rendaBruta = RendaBruta;
}

Pessoa::Pessoa()
{
}
}
