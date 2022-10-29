#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int m=max(x,max(y,z));
    if(m==x)
    {
        if(x*x==y*y+z*z)
        {
            cout<<"\nYES";
        }
        else
        {
            cout<<"\nNO";
        }
    }
    if(m==y)
    {
        if(y*y==x*x+z*z)
        {
            cout<<"\nYES";
        }
        else
        {
            cout<<"\nNO";
        }
    }
    if(m==z)
    {
        if(z*z==y*y+x*x)
        {
            cout<<"\nYES";
        }
        else
        {
            cout<<"\nNO";
        }
    }
    return 0;
}