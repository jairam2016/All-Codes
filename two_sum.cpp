#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2 ,6, 6, 5, 2, 2};
    int size=(sizeof(arr)/sizeof(int));
    sort(arr,arr+size);
    int target=8;
    vector<int> ans;

    unordered_map<int,int> mpp;
    for(int i=0;i<size;i++)
    {
        if(mpp.find(target-arr[i])!=mpp.end())
        {
            ans.push_back(target-arr[i]);
            ans.push_back(arr[i]);
        }
        else
        {
            mpp[arr[i]]=i;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}