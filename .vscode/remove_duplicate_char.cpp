#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(string str, int size, int len)
{
    if(size==len)
    {
        return;
    }
    else
    {
        if(str[size]==str[size+1])
        {
            size=size+1;
            return remove_duplicate(str,size,len);
        }
        else
        {
            cout<<str[size];
            size=size+1;
            return remove_duplicate(str,size,len);
        }
    }
}
int main()
{
    string str="aaaabbbbeeecdddd";
    int len=str.length();
    remove_duplicate(str,0,len);
    return 0;
}