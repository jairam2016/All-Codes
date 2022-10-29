#include <bits/stdc++.h>
using namespace std;
int tiling(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
         return tiling(n-1)+tiling(n-2);
}
int main()
{
    int n=6;
    cout<<tiling(n);
    return 0;
}