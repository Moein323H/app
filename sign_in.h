#ifndef SIGN_IN_H
#define SIGN_IN_H
#include "app.h"
#include "ui_app.h"

#include <QMainWindow>

namespace Ui {
class sign_in;
}

class sign_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit sign_in(QWidget *parent = nullptr);
    App *app;
    ~sign_in();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sign_in *ui;
};

#endif // SIGN_IN_H
