#include "include/contentboxlayout.h"

ContentBoxLayout::ContentBoxLayout() : QVBoxLayout()
{
    QPushButton *test = new QPushButton("test");
    this->addWidget(test);
}
