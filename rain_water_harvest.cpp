#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int left=0;
    int right=0;
    for(int i=0;i<len;i++)
    {
        left=arr[i];
        for(int j=0;j<i;j++)
        {
            left=max(left,arr[j]);
        }
        right=arr[i];
        for(int j=i+1;j<len;j++)
        {
            right=max(right,arr[j]);
        }

        sum=sum+(min(left,right)-arr[i]);
    }
    cout<<sum;
    return 0;
}