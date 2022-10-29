#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,0,-1,-1,2,4,3,-3};
    int size=(sizeof(arr)/sizeof(int));
    unordered_map<int,int> mp;
    int sum=0;
    int len=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(sum==0)
        {
            len=max(len,i+1);
        }
        if(mp.find(sum)!=mp.end())
        {
            len=max(len,i-mp[sum]);
        }
        else
        {
            mp[sum]=i;
        }
    }
    cout<<len;
    return 0;
}