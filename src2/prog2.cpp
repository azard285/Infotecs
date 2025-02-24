#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include "funktion.h"

const int BUFFER_SIZE = 64;

int main() {
    int sock = 0;
        struct sockaddr_in serv_addr;
        char buffer[BUFFER_SIZE] = {0};

        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            perror("socket failed");
            return -1;
        }

        memset(&serv_addr, 0, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
            perror("Invalid address/ Address not supported");
            close(sock);
            
        }

    while(1){
        if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
            perror("connect failed");
            close(sock);
            sleep(5);
            continue;
        }
    
        
        recv(sock, buffer, BUFFER_SIZE, 0);
        cout << buffer << endl;
        if (Lestr(buffer)) {
            cout << "Получено:" << buffer << endl;
        }
        else{
            cout << "Ошибка, введено не то правильное число" << buffer << endl;
            continue;
        }
    

    close(sock);
    }
    return 0;
}