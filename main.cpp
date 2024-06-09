#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("АИС Иннова (Company Design)");
    w.show();
    return a.exec();
}
