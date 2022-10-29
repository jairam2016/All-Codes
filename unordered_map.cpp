#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string>m;
    m[1]="abc";
    m[2]="fbj";
    m[3]="bnv";
    m[4]="fgd";
    m[5]="tre";
    m[6]="ujh";
    for(auto p:m)
    {
        cout<<p.first<<"   "<<p.second<<endl;
    }
    return 0;
}
// NOT MUCH USE