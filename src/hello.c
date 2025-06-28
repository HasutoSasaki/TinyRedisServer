#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>

int main() {
    int server_fd, client_fd;
    struct sockaddr_in addr;
    char response[] = "+Hello world!\r\n";

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(6379);

    bind(server_fd, (struct sockaddr *)&addr, sizeof(addr));
    listen(server_fd, 16);

    while (1) {
        client_fd = accept(server_fd, NULL, NULL);
        write(client_fd, response, strlen(response));
        close(client_fd);
    }

    close(server_fd);
    return 0;
}