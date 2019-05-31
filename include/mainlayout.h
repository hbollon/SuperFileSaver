#ifndef MAINLAYOUT_H
#define MAINLAYOUT_H

#include <QBoxLayout>
#include <QTextBrowser>
#include "include/borderlayout.h"
#include "include/contentboxlayout.h"
#include "include/menuboxlayout.h"

class MainLayout : public QHBoxLayout
{
    public:
        MainLayout();
    private:
        BorderLayout *layoutDispose;
        MenuBoxLayout *menu;
        ContentBoxLayout *content;

};

#endif // MAINLAYOUT_H
