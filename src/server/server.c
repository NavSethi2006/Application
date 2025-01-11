

#define DATAGRAM_SIZE 2000

#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <libavutil/base64.h>


int sock_desc;
struct sockaddr_in server_addr;
struct sockaddr_in client_addr;
char server_message[DATAGRAM_SIZE];   
char client_message[DATAGRAM_SIZE];
int client_struct_length = sizeof(client_addr); 

void server_init() {

    memset(server_message, '\0', sizeof(server_message));
    memset(client_message, '\0', sizeof(client_message));

    sock_desc = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if(sock_desc < 0) {
        perror("[-]ERROR WHILE CREATING SOCKET : ");
        exit(1);
    }
    printf("[+]Socket created\n");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(2000);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if(bind(sock_desc,(struct sockaddr*) &server_addr, sizeof(server_addr)) < 0) {
        perror("[-]ERROR WHILE BINDING SOCKET : ");
        exit(1);
    }
    
    printf("[+]Binding Success\n");
}

char* server_getframe() {

    if(recvfrom(sock_desc, client_message, sizeof(client_message), 0, 
    (struct sockaddr*) &client_addr, &client_struct_length) < 0) {
        perror("[-]ERROR WHILE RECIVING MESSAGE");
        exit(1);
    }

    char* raw_camera_binary;

    av_base64_decode(client_message, raw_camera_binary, sizeof(client_message));

    printf("%s\n",raw_camera_binary);

    return raw_camera_binary;

}


