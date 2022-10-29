#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ORDERED SET
    set<int> s;
    s.insert(7);
    s.insert(3);
    s.insert(1);
    s.insert(8);
    s.insert(6);
    s.insert(11);
    s.insert(12);
    set<int> :: iterator it;
    auto x=s.find(3);
    s.erase(s.find(3));
    cout<<*x<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<"    ";
    }
    cout<<endl;
    // UNORDERED SET
    unordered_set<int> s1;
    s1.insert(7);
    s1.insert(3);
    s1.insert(1);
    s1.insert(8);
    s1.insert(6);
    s1.insert(11);
    s1.insert(12);
    unordered_set<int> :: iterator it1;
    // cout<<*x<<endl;
    for(it1=s1.begin();it1!=s1.end();it1++)
    {
        cout<<*it1<<"    ";
    }
    return 0;
}