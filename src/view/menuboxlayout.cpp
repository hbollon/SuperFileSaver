#include "include/menuboxlayout.h"

MenuBoxLayout::MenuBoxLayout() : QVBoxLayout()
{
    container = new QGroupBox();
    QVBoxLayout *layoutContainer = new QVBoxLayout(container);
    buttonBackups = new QPushButton("Backups");
    buttonRestore = new QPushButton("Restore");
    buttonExtras = new QPushButton("Extras");
    buttonsSettings = new QPushButton("Settings");

    buttonBackups->setStyleSheet("color: white;"
                                 "background-color: darkGrey;"
                                 "height: 60px;"
                                 "width: 100px;");

    buttonRestore->setStyleSheet("color: white;"
                                 "background-color: darkGrey;"
                                 "height: 60px;"
                                 "width: 100px;");

    buttonExtras->setStyleSheet("color: white;"
                                 "background-color: darkGrey;"
                                 "height: 60px;"
                                 "width: 100px;");

    buttonsSettings->setStyleSheet("color: white;"
                                 "background-color: darkGrey;"
                                 "height: 60px;"
                                 "width: 100px;");

    container->setStyleSheet("padding: 0px;"
                             "margin: 0px;"
                            );

    layoutContainer->addWidget(buttonBackups);
    layoutContainer->addWidget(buttonRestore);
    layoutContainer->addWidget(buttonExtras);
    layoutContainer->addWidget(buttonsSettings);

    this->addWidget(container);
}
