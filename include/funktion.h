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
        str += s; 
    }
}

int StSum(string str){
    int sum = 0;
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

int StSum(string str){
    
    vector<char> split;
    for (char c : str)
    {
        if(c < 48 and c > 57){
            cerr << "Error: Uncorrect word, not always symbols are number";
            abort();
        }
        //split.push_back(c);
        sum += c - '0';
    }

    return sum;
}

