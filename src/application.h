#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <QtWidgets/QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "../build/ui_MainForm.h"


void _application(QApplication* a, QMainWindow *window);

void application_update();

void application_close();

#endif

