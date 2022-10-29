#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    int r;
    cout<<"\nENTER THE STRING:";
    getline(cin,str);
    int len=str.length();
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            r=len-i;
            len=i-1;
            str2.append(str.substr((i+1),r));
            str2.append(" ");
        }
    }
    str2.append(str.substr(0,(len+1)));
    cout<<str2;
    return 0;
}