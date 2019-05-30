#include "include/mainlayout.h"

MainLayout::MainLayout() : QGridLayout()
{
    menu = new MenuBoxLayout();
    this->addLayout(menu, 1, 1);
}
