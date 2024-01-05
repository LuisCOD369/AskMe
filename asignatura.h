#ifndef ASIGNATURA_H
#define ASIGNATURA_H


#include <QString>
#include <QList>
#include "tema.h"

class Asignatura
{
public:
    Asignatura();
    Asignatura(const QString &nombre);
    void agregarTema(Tema* t);

    const QString &nombre() const;
    const QList<Tema *> &temas() const;

private:
    QString m_nombre;
    QList<Tema*> m_temas;
};

#endif // ASIGNATURA_H
