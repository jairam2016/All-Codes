#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,112,42,14,10,11,55,78,52,42,32,31};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
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