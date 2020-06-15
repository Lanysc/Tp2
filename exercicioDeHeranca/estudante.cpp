#include "estudante.h"

namespace wictor {
Estudante::Estudante()
{

}

QString Estudante::getMatricula() const
{
    return matricula;
}

void Estudante::setMatricula(const QString Matricula)
{
    for (int i = 0; i < (int)Matricula.size(); i++){
        if(Matricula[i] < '0' or Matricula[i] > '9') throw QString("Matricula Invalida");
    }
    matricula = Matricula;
}

QString Estudante::getCurso() const
{
    return curso;
}

void Estudante::setCurso(const QString Curso)
{
    for (int i = 0; i < (int)Curso.size(); i++){
        if(!Curso[i].isLetter()) throw QString("Curso Invalida");
    }
    curso = Curso;
}

QString Estudante::getCampus() const
{
    return campus;
}

void Estudante::setCampus(const QString Campus)
{
    campus = Campus;
}
}
