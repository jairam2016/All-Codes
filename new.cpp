#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    
    int x,m,n;
    cin>>x>>m>>n;
    double m1=m;
    long double ans=1.0;
    // long double ans=1.0;
    long long nn=n;
    if(nn<0)
    {
        nn=nn*-1;
    }
    while(nn>0)
    {
        if(nn%2==1)
        {
            ans=ans*x;
            nn=nn-1;
        }
        else
        {
            x=x*x;
            nn=nn/2;
        }
    }
    if(n<0)
    {
        ans=(double)1.0/(double) (ans);
    }
    double var=(int)ans%(int)m1;
    cout<<var;
    return 0;
}