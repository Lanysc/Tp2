#include "pessoa.h"

namespace wictor{
QString Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString Nome)
{
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
    telefone = Telefone;
}

void Pessoa::setEmail(const QString Email)
{
    email = Email;
}

QString Pessoa::getEmail() const
{
    return email;
}

Pessoa::Pessoa()
{
}
}
