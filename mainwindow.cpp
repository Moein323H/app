#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sabbtename.h"
#include <QtWidgets>
#include <QBoxLayout>
#include "name.h"
#include "ui_name.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    name = new Name();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    name->show();
}
