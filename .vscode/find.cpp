#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele=0;
        cin>>ele;
        arr.push_back(ele);
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        vector<int> :: iterator it;
        int y=arr[i];
        it=(find(arr.begin(),arr.end(),y));
        if(it!=arr.end())
        {
            mp[*it]++;
            if(mp[*it]>1)
            {
                cout<<*it;
                exit(0);
            }
        }
    }
    cout<<-1;
    return 0;
}