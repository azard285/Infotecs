#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include "funktion.h"

using namespace std;

void dop1(){
        cerr << "fsdfsfefjkheorjthelrituhn\n";
    string str;
    cout << "Введите строку:" << endl;
    cin >> str;
    cout << endl;

    if(str.length() > 64)
    {
            cerr << "Error: so long word. Can be >64";
            abort();
    }
    for (char c : str)
    {
        if(c < 48 or c > 57){
            cerr << "Error: Uncorrect word, not always symbols are number";
            abort();
        }
    }
    sortKB(str);
}

void dop2(int new_socket){
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, []{return data_ready;});
    string str = all_data;
    all_data.clear();

    cout << "Поток 2, полученные данные: " << str << endl;
    string n = StSum(str);

    send(new_socket, n.c_str(), n.length(), 0);
}

int main()
{
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        cerr << "socket failed" << endl;
        return -1;
    }

    memset(&address, 0, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        cerr << "bind failed" << strerror(errno) << endl;
    close(server_fd);
        return -1;
    }
    while(1){

    if (listen(server_fd, 3) < 0) {
        perror("listen failed");
    close(server_fd);
    close(new_socket);
        return -1;
    }
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            perror("accept failed");
        }
        thread firthe(dop1);
        thread secthe(dop2, server_fd);

        firthe.join();
        secthe.join();

    }

    close(server_fd);
    close(new_socket);
        return 0;
}

