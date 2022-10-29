#include <bits/stdc++.h>
using namespace std;
int maximum(int arr[],int i)
{
    int m=arr[0];
    for(int j=0;j<=i;j++)
    {
        if(arr[j]>m)
        {
            m=arr[j];
        }
    }
    return m;
}
int main()
{
    int arr[]={0,-9,1,3,-4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max[6];
    for(int i=0;i<len;i++)
    {
        max[i]=maximum(arr,i);
    }
    for(int i=0;i<len;i++)
    {
        cout<<max[i]<<" ";
    }
    return 0;
}