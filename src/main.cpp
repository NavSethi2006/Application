#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "utils.h"
#include "application.h"



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QMainWindow window;
    Ui::MainWindow ui;
    ui.setupUi(&window);
    window.show();
    _application(&a, &window);

    return a.exec();
}


