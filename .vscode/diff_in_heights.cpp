#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,5,8,10};
    int k=2,n=4;
    sort(arr,arr+n);
    int min=arr[0];
    if(min<=k)
    {
        min=min+k;
    }
    else
    {
        min=min-k;
    }
    int max=arr[3];
    max=max-k;
    int diff=max-min;
    cout<<diff;
    return 0;
}