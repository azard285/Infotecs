#include <iostream>
#include <string>
#include "funktion.h"

using namespace std;

int main()
{
    string str = "poprobuem", tesum = "123456", tridva = "qwertyuiopasdfghjkljjzxcvbnm,./;";

    sortKB(str);


    cout << str << endl << StSum(tesum) << endl << Lestr(tridva) << endl;
}