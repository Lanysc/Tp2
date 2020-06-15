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
    double rendaBruta;
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
    
    double getRendaBruta() const;
    void setRendaBruta(double RendaBruta);

    virtual double calcularImposto() = 0;
};
}

#endif // PESSOA_H
