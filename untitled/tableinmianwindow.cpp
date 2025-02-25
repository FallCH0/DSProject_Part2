#include "tableinmianwindow.h"
#include "ui_tableinmianwindow.h"

tableinmianwindow::tableinmianwindow(QWidget *parent)
    : QTabWidget(parent)
    , ui(new Ui::tableinmianwindow)
{
    ui->setupUi(this);
}

tableinmianwindow::~tableinmianwindow()
{
    delete ui;
}
