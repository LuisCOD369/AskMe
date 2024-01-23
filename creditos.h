#ifndef CREDITOS_H
#define CREDITOS_H

#include <QWidget>
#include <QUrl>
#include <QDesktopServices>

namespace Ui {
class Creditos;
}

class Creditos : public QWidget
{
    Q_OBJECT

public:
    explicit Creditos(QWidget *parent = nullptr);
    ~Creditos();

private slots:


    void on_lblGitLuis_linkActivated(const QString &link);

private:
    Ui::Creditos *ui;
};

#endif // CREDITOS_H
