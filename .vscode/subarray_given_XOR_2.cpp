#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10, 1 ,0 ,3, 4, 7};
    int target=11;
    int size=6;
    int ans=0;
    unordered_map<int,int> mpp;
    int prefix_XOR=0;
    for(int i=0;i<size;i++)
    {
        prefix_XOR=prefix_XOR^arr[i];
        if(prefix_XOR==target)
        {
            ans++;
        }
        if(mpp[prefix_XOR^target]!=0)
        {
            ans=ans+mpp[prefix_XOR^target];
        }
        mpp[prefix_XOR]++;
    }
    cout<<ans;
    return 0;
}