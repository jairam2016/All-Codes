#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
    int v1=(a.first/a.second);
    int v2=(b.first/b.second);
    return v1>v2;
}
int main()
{
    vector<pair<int,int>> vpp;
    int no_of_items;
    cout<<"\nNO OF ITEMS: ";
    cin>>no_of_items;
    for(int i=0;i<no_of_items;i++)
    {
        int value,weight;
        cin>>value;
        cin>>weight;
        vpp.push_back(make_pair(value,weight));
    }
    int ans=0;
    int bag_weight=0;
    cout<<"\nPLEASE ENTER THE BAG WEIGHT:";
    cin>>bag_weight;
    sort(vpp.begin(),vpp.end(),compare);

    for(int i=0;i<no_of_items;i++)
    {
        if(bag_weight>=vpp[i].second)
        {
            ans=ans+vpp[i].first;
            bag_weight=bag_weight-vpp[i].second;
        }
        else
        {
            int v=(vpp[i].first/vpp[i].second);
            ans=ans+(bag_weight*v);
            bag_weight=0;
        }
    }
    cout<<ans;
    return 0;
}