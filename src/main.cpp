#include "include/mainwindow.h"
#include "include/model/FilesPath.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    FilesPath test = FilesPath("test");

    test.addSavePath("Images", "/home/images/", "/home/backups/");
    cout << "Nom : " << "Images" << " | SourcePath : " << test.getSaveMap()["Images"].front().first << " | TargetPath : " << test.getSaveMap()["Images"].front().second << endl;

    w.show();

    return a.exec();
}
