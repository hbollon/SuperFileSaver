#ifndef MENUBOXLAYOUT_H
#define MENUBOXLAYOUT_H

#include <QBoxLayout>
#include <QPushButton>

class MenuBoxLayout : public QVBoxLayout
{
    public:
        MenuBoxLayout();
    private:
        QPushButton *buttonBackups;
        QPushButton *buttonRestore;
        QPushButton *buttonExtras;
        QPushButton *buttonsSettings;
};

#endif // MENUBOXLAYOUT_H
