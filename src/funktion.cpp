#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "funktion.h"

using namespace std;

void sortKB(string &str)
{
    unique_lock<mutex> lock(mtx);
    vector<string> split;

    for (char c : str)
    {
        string l(1, c);
        split.push_back(l);
    }

    sort(split.begin(), split.end(), [](string a, string b){return a > b;});

    for(int i = 0; i < split.size(); i++)
    {
        if(stoi(split[i])%2 == 0)
        {
        split[i] = "KB";
        }
    }

    str = "";
    all_data = "";
    for(const string& s : split) {
        str += s;
        all_data += s; 
    }
    data_ready = true;
    cv.notify_one();
}

string StSum(string str){
    int sum = 0;
    for (char c : str)
    {
        if(c < 48 and c > 57){
            continue;
        }
        sum += c - '0';
    }

    return to_string(sum);
}

int Lestr(string str){
    if(str.length() > 2 and stoi(str)%32 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

