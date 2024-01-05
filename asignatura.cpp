#include "asignatura.h"

Asignatura::Asignatura()
{

}
Asignatura::Asignatura(const QString &nombre) : m_nombre(nombre)
{}

void Asignatura::agregarTema(Tema *t)
{
    m_temas.append(t);
}

const QString &Asignatura::nombre() const
{
    return m_nombre;
}

const QList<Tema *> &Asignatura::temas() const
{
    return m_temas;
}
