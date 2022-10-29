#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=15;
    int count=0;
    while(x>0)
    {
        count=count+(x&1);
        x=x>>1;
    }
    cout<<count;
    return 0;
}