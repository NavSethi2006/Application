#ifndef TEXT_AREA_H
#define TEXT_AREA_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QScrollBar>
#include <vector>
#include <string>


void initilize_textarea(QWidget *window);

void textarea_append(std::string st);

QTextEdit *get_textarea();

std::vector<std::string> get_list_of_items();

#endif
