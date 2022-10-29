#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string>> p;
    int n;
    cout<<"\nNO OF STUDENTS: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int marks=0;
        string str="";
        cin>>marks;
        cin>>str;
        p[marks].insert(str);
    }
    auto cur=--p.end();
    while(true)
    {
        auto &students=(*cur).second;
        int marks=(*cur).first;
        for(auto student:students)
        {
            cout<<student<<"\t"<<marks<<endl;
        }
        if(cur==p.begin())
            break;
        cur--;
    }
    return 0;
}