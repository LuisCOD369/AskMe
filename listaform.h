#ifndef LISTAFORM_H
#define LISTAFORM_H

#include <QWidget>
#include <QTableWidget>

#include <asignatura.h>
#include <ui_listaform.h>

namespace Ui {
class listaForm;
}

class listaForm : public QWidget
{
    Q_OBJECT

public:
    explicit listaForm(QWidget *parent = nullptr);
    void setAsignaturas(QList<Asignatura *> *asignaturas);
    void cargarAsignaturas();
    void cargarTT(QString asignatura);
    void cargarTerminos(int fila, int columna);
    void limpiar();
    ~listaForm();

private:
    Ui::listaForm *ui;
    QList<Asignatura *> *m_asignaturas;

private slots:
    void cargarTemas();
    void on_tblTemas_cellClicked(int row, int column);
};

#endif // LISTAFORM_H
