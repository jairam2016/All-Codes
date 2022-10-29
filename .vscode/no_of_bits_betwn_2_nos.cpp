#include <bits/stdc++.h>
using namespace std;
int set_bits(int i)
{
    int c=0;
    while(i>0)
    {
        c=c+(i&1);
        i=i>>1;
    }
    return c;
}
int main()
{
    int a=10,b=15,count=0;
    for(int i=a;i<=b;i++)
    {
        count=count+set_bits(i);
    }
    cout<<count;
    return 0;
}