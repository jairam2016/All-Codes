#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hay = "it is a good thing to be honest with yourself and keep working hard";
    string search = "hard";
    
    transform(hay.begin(),hay.end(),hay.begin(),::toupper);
    transform(search.begin(),search.end(),search.begin(),::toupper);

    char *found = strstr(hay.c_str(), search.c_str());

    if (found)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}