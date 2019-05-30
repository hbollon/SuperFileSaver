#include "include/menuboxlayout.h"

MenuBoxLayout::MenuBoxLayout() : QVBoxLayout()
{
    buttonBackups = new QPushButton("Backups");
    buttonRestore = new QPushButton("Restore");
    buttonExtras = new QPushButton("Extras");
    buttonsSettings = new QPushButton("Settings");

    this->addWidget(buttonBackups);
    this->addWidget(buttonRestore);
    this->addWidget(buttonExtras);
    this->addWidget(buttonsSettings);
}
