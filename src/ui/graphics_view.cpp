#include "graphics_view.h"


QWidget *view;
GstBuffer *buffer;
GstFlowReturn ret;

pthread_t *network_thread;

void initilize_graphics_view(QWidget *window) {

    view = window->findChild<QWidget*>("camera");

    pthread_create(network_thread, NULL, udp_thread,NULL);

    buffer = gst_buffer_new_allocate(NULL,)

}

void *udp_thread(void *args) {

    while(1) {
        
    }

}


void update_graphics_view() {
    
}