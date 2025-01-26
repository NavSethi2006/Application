#include "graphics_view.h"


QLabel *video_label;

int width = 640;
int height = 480;

pthread_t *network_thread;


void *udp_thread(void *args) {
    
    while(1) {

        char *decoded_data = server_getframe();

        QImage image(reinterpret_cast<const uchar *>(decoded_data),
                 width, height, QImage::Format_RGB888);

        video_label->setPixmap(QPixmap::fromImage(image));

    }

}

void initilize_graphics_view(QWidget *window) {

    video_label = window->findChild<QLabel*>("video_label");

}


void update_graphics_view() {

    pthread_create(network_thread, NULL, udp_thread,NULL);

}

