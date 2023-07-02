#ifndef SABBTENAME_H
#define SABBTENAME_H

#include <QMainWindow>

namespace Ui {
class sabbteName;
}

class sabbteName : public QMainWindow
{
    Q_OBJECT

public:
    explicit sabbteName(QWidget *parent = nullptr);
    ~sabbteName();

private:
    Ui::sabbteName *ui;
};

#endif // SABBTENAME_H
