#include "application.h"
#include "ui/graphics_view.h"
#include "ui/text_area.h"



void _application(QApplication* a, QMainWindow *window) {

    initilize_textarea(window);
    
    initilize_graphics_view(window);
}

void application_update() {

    update_graphics_view();

}

void application_close() {

}


