#include "graduado.h"

namespace wictor {
QString Graduado::getAnoConclusao() const
{
    return anoConclusao;
}

void Graduado::setAnoConclusao(const QString AnoConclusao)
{
    for (int i = 0; i < (int)AnoConclusao.size(); i++){
        if(!AnoConclusao[i].isNumber()) throw QString("Ano Invalido");
    }
    int aux = AnoConclusao.toInt();
    if (aux > 2020 or aux <= 0) throw QString ("Ano Invalido");
    anoConclusao = AnoConclusao;
}

QString Graduado::getAnoColacaoGrau() const
{
    return anoColacaoGrau;
}

void Graduado::setAnoColacaoGrau(const QString AnaColacaoGrau)
{
    for (int i = 0; i < (int)AnaColacaoGrau.size(); i++){
        if(!AnaColacaoGrau[i].isNumber()) throw QString("Ano Invalido");
    }
    int aux = AnaColacaoGrau.toInt();
    if (aux > 2020 or aux <= 0) throw QString ("Ano Invalido");
    anoColacaoGrau = AnaColacaoGrau;
}

QString Graduado::getNumeroDiploma() const
{
    return numeroDiploma;
}

void Graduado::setNumeroDiploma(const QString NumeroDiploma)
{
    for (int i = 0; i < (int)NumeroDiploma.size(); i++){
        if(!NumeroDiploma[i].isNumber()) throw QString("Diploma Invalida");
    }
    int aux = NumeroDiploma.toInt();
    if (aux > 2020 or aux <= 0) throw QString ("Diploma Invalido");
    numeroDiploma = NumeroDiploma;
}

Graduado::Graduado()
{
}

}
