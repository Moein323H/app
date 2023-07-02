#ifndef NAME_H
#define NAME_H
#include "sign_in.h"
#include "ui_sign_in.h"
#include "app.h"
#include "ui_app.h"

#include <QMainWindow>

namespace Ui {
class Name;
}

class Name : public QMainWindow
{
    Q_OBJECT

public:
    explicit Name(QWidget *parent = nullptr);
    sign_in *sign;
    App *app;
    ~Name();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Name *ui;
};

#endif // NAME_H
