#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return (n + sum(n-1));
}
int main()
{
    int n=5,s=0;
    // cout<<"\nENTER NUMBER: ";
    // cin>>n;
    s=sum(5);
    cout<<"OUTPUT: "<< s;
    return 0;
}