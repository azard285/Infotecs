#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "funktion.h"

using namespace std;

void sortKB(string &str)
{
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
    for(const string& s : split) {
        str += s; 
    }
}

int StSum(string str){
    int sum = 0;
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
        sum += c - '0';
    }

    return sum;
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

