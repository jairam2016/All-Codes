#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,14,32,21,85,54,74,65,69,60,16,120,78,41,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}