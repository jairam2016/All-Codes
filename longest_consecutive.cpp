#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={11,4,20,1,3,3,2,19,5,18,17,16,6,9,8,7};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    int sum=0;
    int len=0;
    for(int i=0;i<size;i++)
    {
        len=0;
        for(int j=i;j<size-1;j++)
        {
            if(arr[j+1]-arr[j]==1 || arr[j+1]-arr[j]==0)
            {
                len=len+1;
            }
            else
            {
                sum=max(sum,len+1);
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}