#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    long ans=1;
    long xx=x;
    while(n>0)
    {
        if(n%2==0)
        {
            xx=(xx%m*xx%m)%m;
            n=n/2;
        }
        else
        {
            ans=(ans*xx%m)%m;
            n=n-1;
        }
    }
    cout<<(int)(ans%m);
    return 0;
}