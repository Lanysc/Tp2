#ifndef GRADUADO_H
#define GRADUADO_H

#include <pessoa.h>

namespace wictor{
class Graduado:public Pessoa
{
private:
    QString anoConclusao;
    QString anoColacaoGrau;
    QString numeroDiploma;
public:
    Graduado();
    QString getAnoConclusao() const;
    void setAnoConclusao(const QString AnoConclusao);
    QString getAnoColacaoGrau() const;
    void setAnoColacaoGrau(const QString AnoColacao);
    QString getNumeroDiploma() const;
    void setNumeroDiploma(const QString NumeroDiploma);
};
}
#endif // GRADUADO_H
