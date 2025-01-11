#ifndef GRAPHICS_VIEW
#define GRAPHICS_VIEW

#include <QtWidgets/QWidget>
#include <QtWidgets/QGraphicsView>
#include "../server/server.h"
#include <gstreamer-1.0/gst/gst.h>


void initilize_graphics_view(QWidget *window);
void update_graphics_view();


#endif