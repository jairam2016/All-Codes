#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,-3,4,-2,-1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=0,target_sum=1,t=0,sum=0;
    for(int i=0;i<len;i++)
    {
        sum=target_sum-arr[i];
        start=i+1;
        end=len-1;
        while(start<end)
        {
            t=arr[start]+arr[end];
            if(t==sum)
            {
                cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end];
                start++;
                end--;
                cout<<endl;
            }
            if(t<sum)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    return 0;
}       