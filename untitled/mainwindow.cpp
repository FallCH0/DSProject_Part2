#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QTableWidget *newtable=new QTableWidget(20,20,this);
    table=newtable;

    //初始化表格table
    table->setObjectName("TableInMainWindow");
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0); // 去掉边距
    layout->setSpacing(0); // 组件间距设为 0
    layout->addWidget(table);




    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
