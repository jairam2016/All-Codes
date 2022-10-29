#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n=5;
    for(int i=0;i<5;i++)
    {
        string s="";
        cin>>s;
        m[s]++;
    }
    for(auto p:m)
    {
        cout<<p.first<<"   "<<p.second<<endl;
    }

    map<int,int> mp;
    for(int i=0;i<8;i++)
    {
        int x=0;
        cin>>x;
        mp[i]=x;
    }
    for(int i=0;i<8;i++)
    {
        cout<< mp[i] <<"  ";
    }
    return 0;
}