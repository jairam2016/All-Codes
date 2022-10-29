#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    vector<pair<int,int>> p={{1,2},{3,4},{6,7},{8,9}};
    set<int>vec;
    vec.
    
    for(auto val:p)
    {
        cout<<val.first<<"   "<<val.second;
        cout<<endl;
    }
    // for(int i=0;i<5;i++)
    // {
    //     cin>>x>>y;
    //     p.push_back({x,y});
    //     x=0;y=0;
    // }
    // for(int i=0;i<7;i++)
    // {
    //     cout<<p[i].first<<"  "<<p[i].second;
    //     cout<<endl;
    // }

    vector<pair<int,int>>::iterator it;
    for( it=p.begin();it!=p.end();it++)
    {
        cout<<(*it).first<<"   "<<(*it).second;
        cout<<endl;
    }

    return 0;
}