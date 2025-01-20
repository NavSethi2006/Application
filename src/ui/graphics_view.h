#ifndef GRAPHICS_VIEW
#define GRAPHICS_VIEW

#include <QtWidgets/QWidget>
#include <QtWidgets/QGraphicsView>
#include <gstreamer-1.0/gst/gst.h>
#include <stdio.h>
#include <stdlib.h>
#include "../server/server.h"


void initilize_graphics_view(QWidget *window);
void update_graphics_view();


#endif