#include <bits/stdc++.h>
using namespace std;
void replacement(string str,int size,int len)
{
    if(size>len)
    {
        return;
    }
    else
    {
        if(str[size]=='p' && str[size+1]=='i')
        {
            cout<<"3.14";
            size=size+2;
              return replacement(str,size,len);
        }
        else
        {
            cout<<str[size];
            size=size+1;
             return replacement(str,size,len);
        }
    }
}
int main()
{
    string str="pippxxppiixipi";
    int len=str.length();
    replacement(str,0,len);
    return 0;
}