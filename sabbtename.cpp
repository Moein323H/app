#include "sabbtename.h"
#include "ui_sabbtename.h"

sabbteName::sabbteName(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sabbteName)
{
    ui->setupUi(this);
}

sabbteName::~sabbteName()
{
    delete ui;
}

