#include <iostream>
#include <string>
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

    while (true) {
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            cerr << "socket failed";
            sleep(5); 
            continue;
        }

        memset(&serv_addr, 0, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
            cerr << "Invalid address/ Address not supported";
            close(sock);
            sleep(5); 
            continue;
        }

        if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
            cerr << "connect failed";
            close(sock); 
            sleep(5); 
            continue;
        }

        cout << "Server connect!" << endl;

        while (true) {
            memset(buffer, 0, BUFFER_SIZE); 
            int valread = recv(sock, buffer, BUFFER_SIZE, 0);

            if (valread <= 0) {
                if (valread == 0) {
                    cout << "Server is down" << endl;
                } else {
                    cerr << "Error: no data";
                }
                close(sock); 
                break; 
            }

            cout << "Получено: " << buffer << endl;
            if (Lestr(buffer)) {
                cout << "Данные корректны: " << buffer << endl;
            } else {
                cout << "Ошибка: получены некорректные данные" << endl;
            }
        }

        close(sock);
        cout << "Try reconnect to server 5 sec..." << endl;
        sleep(5); 
    }

    return 0;
}