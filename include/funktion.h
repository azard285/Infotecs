#pragma once
#include <iostream>
#include <string>
#include <mutex>
#include <condition_variable>
#ifndef FUNKTION_H
#define FUNKTION_H
using namespace std;

mutex mtx;
condition_variable cv;
bool data_ready = false;
string all_data;
const int PORT = rand()%1024 + 8000;

void sortKB(string &str);
string StSum(string str);
int Lestr(string str);

#endif