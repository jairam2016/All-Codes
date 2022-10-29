#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="jai";
    m[2]="cdf";
    m[3]="kjl";
    m.insert({4,"mnb"});
    for(auto pr : m)
    {
        cout<< pr.first<<"   "<< pr.second << endl;
    }
    return 0;
}