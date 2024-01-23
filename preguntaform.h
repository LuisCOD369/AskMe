#ifndef PREGUNTAFORM_H
#define PREGUNTAFORM_H

#include <QWidget>
#include <QDebug>

#include "cuestionario.h"
#include <resultadosform.h>

namespace Ui {
class PreguntaForm;
}

class PreguntaForm : public QWidget
{
    Q_OBJECT

public:
    explicit PreguntaForm(QWidget *parent = nullptr);
    ~PreguntaForm();

    void mostrarConceptos();
    void setCuestionario(Cuestionario *newCuestionario);

public slots:
    void setAsignaturaVer(const QString &asignatura);
    void setTemaVer(const QString &tema);
signals:
    void preguntasContestadas(Cuestionario *cuestionario);
private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

    //void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::PreguntaForm *ui;
    Cuestionario *m_cuestionario;
    Pregunta *m_pregunta;

    void cargarDatos();
    void siguiente();
    void obtenerPregunta();
};

#endif // PREGUNTAFORM_H
