#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,4,6,3,4};
    vector<pair<int,int>> vec;
    for(int i=0;i<4;i++)
    {
        vec.push_back(make_pair(arr[i],arr[i+1]));
    }
    vector<pair<int,int>> :: iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
            cout<<max(it->first,it->second)<<"  ";
    }
    return 0;
}