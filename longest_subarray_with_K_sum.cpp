#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,-1,5,-2,2};
    int size=5;
    unordered_map<int,int> mp;
    int sum=4;
    int len=0;
    int pre=0;
    for(int i=0;i<size;i++)
    {
        pre=pre+arr[i];
        if(pre==sum)
        {
            len=max(len,i+1);
        }
        int crs=pre-sum;
        if(mp.find(crs)!=mp.end())
        {
            len=max(len,i-mp[crs]);
        }
        else
        {
            mp[pre]=i;
        }
    }
    cout<<len;
    return 0;
}