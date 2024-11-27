#include <iostream>
#include <QtCore/qcoreapplication.h>
#include "window.h"
#include "ui_MainForm.h"

int main(int argc, char *argv[])
{

    std::cout << "Hello World\n";

    QCoreApplication a(argc, argv);
    
    QWidget widget;

    return a.exec();
}
