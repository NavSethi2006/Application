

#ifndef __cplusplus
extern "C" {
#endif

#define DATAGRAM_SIZE 2000

#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void server_init();

char* server_getframe();

#ifndef __cplusplus
}
#endif
