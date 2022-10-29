#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    else
    {
        return a.first>b.first;
    }
}
int main()
{
    vector<pair<int,int>> vec;
    vec.push_back(make_pair(4,4));
    vec.push_back(make_pair(5,3));
    vec.push_back(make_pair(2,9));
    vec.push_back(make_pair(3,0));
    vec.push_back(make_pair(6,6));
    vec.push_back(make_pair(6,2));
    vec.push_back(make_pair(4,6));
    vec.push_back(make_pair(4,8));
    vec.push_back(make_pair(1,3));
    vec.push_back(make_pair(1,8));

    sort(vec.begin(),vec.end(),comp);  

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<"   "<<vec[i].second;
        cout<<endl;
    }
    return 0;
}