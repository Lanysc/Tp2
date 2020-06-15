#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <pessoa.h>

namespace wictor{
class Estudante:public Pessoa
{
private:
    QString matricula;
    QString curso;
    QString campus;
public:
    Estudante();
    QString getMatricula() const;
    void setMatricula(const QString Matricula);
    QString getCurso() const;
    void setCurso(const QString Curso);
    QString getCampus() const;
    void setCampus(const QString Campus);
};
}
#endif // ESTUDANTE_H
