#include "include/mainlayout.h"

MainLayout::MainLayout() : QHBoxLayout()
{
    menu = new MenuBoxLayout();
    content = new ContentBoxLayout();
    layoutDispose = new BorderLayout(50);

    layoutDispose->add(menu, BorderLayout::West);
    layoutDispose->add(content, BorderLayout::Center);

    this->addLayout(layoutDispose);
}
