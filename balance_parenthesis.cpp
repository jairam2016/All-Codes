#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="{[()]}(((()))){[{}]}";
    int c=0;
    stack<char>s;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            s.push(str[i]);
            c++;
        }
        if(str[i]=='}' || str[i]==']' || str[i]==')')
        {
            s.pop();
            c--;
        }
    }
    if(c!=0)
    {
        cout<<"\nNOT BALANCED";
    }
    else
    {
        cout<<"\nBALANCED";
    }
    return 0;
}