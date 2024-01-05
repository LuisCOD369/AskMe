#include "pregunta.h"

Pregunta::Pregunta()
{

}

bool Pregunta::correcta() const
{
    return m_correcta;
}

bool Pregunta::respondida() const
{
    return m_respondida;
}
