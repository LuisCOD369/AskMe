#include "askme.h"

#include <QApplication>
#include <QDebug>

#include "tema.h"
#include "asignatura.h"
#include "pregunta.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Askme w;
    w.show();

    Apunte *ap1 = new Apunte ("Función", "Una función de dependencia entre A y B");
    Apunte *ap2 = new Apunte ("Derivada", "Correspondencia entre el signo y el crecimiento o decrecimiento de una la función original");



    Tema t("Ecuaciones de primer grado");
    t.agregarApunte(ap1);
    t.agregarApunte(ap2);

    Asignatura asig("Matemáticas");//agregar la asignaturas
    asig.agregarTema(&t);

    qDebug() << asig.nombre();
    qDebug() << t.nombre();

    foreach(Apunte *ap, t.apuntes()){
        qDebug() << ap->toString();
    }

//    Cuestionario cuest;
//    Pregunta *p1 = new Pregunta();
//    Pregunta *p2 = new Pregunta();
//    cuest.agregarPregunta(p1);
//    cuest.agregarPregunta(p2);

    return a.exec();
}
