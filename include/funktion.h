#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void sortKB(string &str)
{
    vector<string> split;

    for (char c : str)
    {
        string l(1, c);
        split.push_back(l);
    }

    sort(split.begin(), split.end());

    int elem = str.length() % 2 == 0 ? str.length() : str.length() - 1;

    for(int i = 1; i <= elem; i+=2)
    {
        split[i] = "KB";
    }

    str = "";
    for(const string& s : split) {
        str += s; // собираем результат в строку
    }
}