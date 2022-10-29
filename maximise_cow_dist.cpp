#include<bits/stdc++.h>
using namespace std;
bool can_place_cows(int mid,int arr[],int size,int cows)
{
    int co_ord=arr[0];
    int count=1;
    for(int i=1;i<size;i++)
    {
        if(arr[i]-co_ord >= mid)
        {
            count++;
            co_ord=arr[i];
        }
        if(count==cows)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int result=0;
    int arr[]={1,2,4,8,9};
    int size=5;
    int cows=3;
    sort(arr,arr+5);
    int start=arr[0];
    int end=arr[size-1];

    while(start<end)
    {
        int mid=(start+end)/2;
        if(can_place_cows(mid,arr,size,cows)==true)
        {
            result=mid;
            start=mid+1;
        }
        else
            end=mid-1;
    }
    cout<<result;
    return 0;
}