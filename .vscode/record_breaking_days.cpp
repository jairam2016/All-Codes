#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,2,0,7,2,0,2,6};
    int len=(sizeof(arr)/sizeof(arr[0]));
    int record_days=0;
    for(int i=0;i<=len-2;i++)
    {
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
        {
            record_days=record_days+1;
        }
    }
    if(arr[0]>arr[1])
    {
        record_days=record_days+1;
    }
    if(arr[len-1]>arr[len-2])
    {
        record_days=record_days+1;
    }
    cout<<"\nNO OF RECORD BREAKING DAYS IS: "<<record_days;
    return 0;
}