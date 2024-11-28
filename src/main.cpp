#include <iostream>
#include <QtCore/qcoreapplication.h>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QtWidgets>
#include "../build/Application_autogen/include/ui_MainForm.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QMainWindow window;
    Ui::MainWindow ui;
    ui.setupUi(&window);
    window.show();




    return a.exec();
}
