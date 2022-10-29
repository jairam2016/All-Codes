#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=15;
    int m[25]={0},c=0,most=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=a;j<=b;j++)
        {
            m[c++]=i^j;
        }
    }
    for(int k=0;k<25;k++)
    {
        if(most<m[k])
        {
            most=m[k];
        }
    }
    cout<<most;
    return 0;
}