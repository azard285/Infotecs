#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include "funktion.h"

const int PORT = 8080;
const int BUFFER_SIZE = 64;

int main() {
    while(1){
        int sock = 0;
        struct sockaddr_in serv_addr;
        char buffer[BUFFER_SIZE] = {0};

        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            perror("socket failed");
            return -1;
        }

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
            perror("Invalid address/ Address not supported");
            return -1;
        }

        if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
            perror("connect failed");
            return -1;
        }

        int valread = recv(sock, buffer, BUFFER_SIZE, 0);
        if (Lestr(buffer)) {
            cout << "Получено:" << buffer << endl;
        }
        else{
            cout << "Ошибка, введено не то правильное число" << endl;
        }

        close(sock);

        return 0;
    }
}