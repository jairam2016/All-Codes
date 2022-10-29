#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,store="",print;
     string str1="";
    int len;
    cout<<"\nENTER THE STRING:";
    cin>>str;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        str1=str1+str[i];
        if(str[i]==' ')
        {
            if((int)(str[i+1]) > (int)(store[0]))
            {
                print=str1+store;
                store=str1;
                str1="";
            }
        }
    }
    cout<<"\n"<<print;
    return 0;
}