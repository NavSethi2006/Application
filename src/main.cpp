#include <iostream>
#include <QtCore/qcoreapplication.h>
#include "window.h"

int main(int argc, char *argv[])
{

    std::cout << "Hello World\n";

    QCoreApplication a(argc, argv);
    
    
    return a.exec();
}
