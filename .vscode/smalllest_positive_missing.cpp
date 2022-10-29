#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,-9,1,2,3,-4,5},mini=999,l;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        if(arr[i]<0)
        {
            continue;
        }
        if(arr[i]>=0)
        {
            mini=min(mini,arr[i]);
        }
    }
    l=mini+1;
    for(int j=0;j<len;j++)
    {
        if(l==arr[j])
        {
            l=l+1;
            j=0;
        }
    }
    cout<<l;
    return 0;
}