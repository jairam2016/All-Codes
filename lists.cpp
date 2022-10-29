#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_back(30);
    // ITERATOR IS NOTHING BUT BASICALLY A POINTER
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"    ";
    }
    l.push_front(12);
    l.push_back(14);
    cout<<endl;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"    ";
    }
    l.reverse();
    l.remove(14);
    cout<<endl;
    l.erase(l.begin());
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"    ";
    }
    l.sort();
    int len=l.size();
    cout<<endl;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"    ";
    }
    cout<<endl<<len;
    return 0;
}