#ifndef MENUBOXLAYOUT_H
#define MENUBOXLAYOUT_H

#include <QBoxLayout>
#include <QPushButton>
#include <QColor>
#include <QWidget>
#include <QGroupBox>

class MenuBoxLayout : public QVBoxLayout
{
    public:
        MenuBoxLayout();
    private:
        QPushButton *buttonBackups;
        QPushButton *buttonRestore;
        QPushButton *buttonExtras;
        QPushButton *buttonsSettings;
        QGroupBox *container;

};

#endif // MENUBOXLAYOUT_H
