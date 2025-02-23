#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "funktion.h"

using namespace std;

void dop1(){
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
        if(c < 48 and c > 57){
            cerr << "Error: Uncorrect word, not always symbols are number";
            abort();
        }
    }
    sortKB(str);
}

void dop2(){
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, []{return data_ready;});
    string str = all_data;
    all_data.clear();

    cout << "Поток 2, полученные данные: " << str << endl;
    int n = StSum(str);
}

int main()
{
 
while(1){

    thread firthe(dop1);
    thread secthe(dop2);

    
}

}