#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={7,5,4,6,8,9};
    int size=6;
    int k=3;
    int ans=0;
    int x=20;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    if(sum<x)
    {
        ans=sum;
    }
    for(int i=k;i<size;i++)
    {
        sum=sum-arr[i-k];
        sum=sum+arr[i];
        if(sum<x)
        {
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}