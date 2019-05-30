#include "include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainLayout = new MainLayout();

    QWidget *mainWidget = new QWidget();
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    this->setMinimumSize(1024, 600);
    this->setStyleSheet("QMainWindow {background: 'lightGrey';}");
    this->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
