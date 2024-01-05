#ifndef PREGUNTA_H
#define PREGUNTA_H


#include <QString>

class Pregunta
{
public:
    Pregunta();
    bool correcta() const;
    bool respondida() const;

private:
    bool m_correcta;
    bool m_respondida;
};

#endif // PREGUNTA_H
