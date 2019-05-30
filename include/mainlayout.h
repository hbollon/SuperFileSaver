#ifndef MAINLAYOUT_H
#define MAINLAYOUT_H

#include <QGridLayout>
#include "include/contentboxlayout.h"
#include "include/menuboxlayout.h"

class MainLayout : public QGridLayout
{
    public:
        MainLayout();
    private:
        MenuBoxLayout *menu;
        ContentBoxLayout *content;

};

#endif // MAINLAYOUT_H
