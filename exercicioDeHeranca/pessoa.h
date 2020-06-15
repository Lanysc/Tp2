#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

namespace wictor {
class Pessoa
{
private:
    QString nome;
    QString endereco;
    QString telefone;
    QString email;
public:
    Pessoa();

    QString getNome() const;
    void setNome(const QString Nome);

    QString getEndereco() const;
    void setEndereco(const QString Endereco);

    QString getTelefone() const;
    void setTelefone(const QString Telefone);

    QString getEmail() const;
    void setEmail(const QString Email);
};
}

#endif // PESSOA_H
