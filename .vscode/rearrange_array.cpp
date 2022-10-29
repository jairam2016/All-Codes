#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int k=0,j=1;
    int len=sizeof(arr)/sizeof(arr[0]);
    int ans[len]={0};
    for(int i=0;i<len/2+1;i++)
    {
        ans[k]=arr[len-i-1];
        ans[j]=arr[i];
        k=k+2;
        j=j+2;
    }
    for(int i=0;i<len;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}