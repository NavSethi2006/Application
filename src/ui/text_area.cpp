#include "text_area.h"

QTextEdit *textedit;
QScrollBar *scrollbar;

std::vector<std::string> list_of_items;


void initilize_textarea(QWidget *window) {
    textedit = window->findChild<QTextEdit*>("itemlist");
    scrollbar = window->findChild<QScrollBar*>("itemlistscroll");
    textedit->setReadOnly(true);
    textedit->setVerticalScrollBar(scrollbar);     
}

void textarea_append(std::string st) {

    std::string old_string = textedit->toPlainText().toStdString();
    textedit->setText((QString::fromStdString(old_string)+"\n"+QString::fromStdString(st)));

}

QTextEdit *get_textarea() {
    return textedit;
}

std::vector<std::string> get_list_of_items() {
    return list_of_items;
}