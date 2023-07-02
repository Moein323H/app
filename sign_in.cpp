#include "sign_in.h"
#include "ui_sign_in.h"
#include "app.h"
#include "ui_app.h"

sign_in::sign_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sign_in)
{
    ui->setupUi(this);
    app = new App();
}

sign_in::~sign_in()
{
    delete ui;
}

void sign_in::on_pushButton_clicked()
{
    this->close();
    app->show();
}
