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

void sortKB(string &str);
int StSum(string str);
int Lestr(string str);

#endif