#include "graphics_view.h"


QWidget *view;
int width = 640;
int height = 480;

pthread_t *network_thread;

void initilize_graphics_view(QWidget *window) {

    view = window->findChild<QWidget*>("camera");

    pthread_create(network_thread, NULL, udp_thread,NULL);

}

void *udp_thread(void *args) {


    

    while(1) {

        char *decoded_data = server_getframe();

        QImage image(reinterpret_cast<const uchar *>(decoded_data),
                 width, height, QImage::Format_RGB888);

        videoLabel->setPixmap(QPixmap::fromImage(image));

    }

}


void update_graphics_view() {
    
}