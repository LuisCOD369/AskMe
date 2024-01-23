#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <QString>

#include "tema.h"

class Asignatura
{
public:
    Asignatura();
    Asignatura(const QString &nombre);
    void agregarTema(Tema *t);

    //const QString &nombre() const;
    const QList<Tema *> &temas() const;
    const QString toString() const;
    QString nombre() const;
private:
    QString m_nombre;
    QList<Tema *> m_temas;

};

#endif // ASIGNATURA_H
