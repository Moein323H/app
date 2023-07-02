#include "name.h"
#include "ui_name.h"
#include "sign_in.h"
#include "ui_sign_in.h"
#include "app.h"
#include "ui_app.h"

Name::Name(QWidget *parent) :
   // QMainWindow(parent),
    ui(new Ui::Name)
{
    ui->setupUi(this);
    sign = new sign_in();
    app = new App();
}

Name::~Name()
{
    delete ui;
}

void Name::on_pushButton_clicked()
{
    this->close();
    app->show();
}

void Name::on_pushButton_2_clicked()
{
    this->close();
    sign->show();
}
