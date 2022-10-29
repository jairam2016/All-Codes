#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[],int size)
{
    int totalsum=0;
    int maximum=0;
    for(int i=0;i<size;i++)
    {
        totalsum=totalsum+arr[i];
        if(totalsum<0)
        {
            totalsum=0;
        }
        maximum=max(maximum,totalsum);
    }
    return maximum;
}
int main()
{
    int arr[]={4,-4,6,-6,10,-11,12};
    int len=sizeof(arr)/sizeof(arr[0]);
    int wrapsum=0,nonwrapsum=0,sum=0;
    nonwrapsum=kadane(arr,len);
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=sum+kadane(arr,len);

    cout<<max(wrapsum,nonwrapsum);
    return 0;
}