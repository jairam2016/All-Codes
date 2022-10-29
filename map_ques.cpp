#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,2,2,1,1,4,3,7,7,7,5,2,9,9,4};
    map<int,int> mp;
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<"   "<<it.second;
        cout<<endl;
    }
    return 0;
}