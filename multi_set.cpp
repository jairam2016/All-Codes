#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    int bag=0;
    int min=0;
    int count=0;
    cout<<"\nNO OF BAGS:";
    cin>>bag;
    cout<<"\nNO OF MINUTES:";        
    cin>>min;
    for(int i=0;i<bag;i++)
    {
        int x=0;
        cout<<"\nENTER THE VALUE: ";
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<min;i++)
    {
        auto it=--s.end();
        int c=*it;
        count=count+*it;
        s.erase(it);
        s.insert(c/2);
    }
    cout<<count;
    return 0;
}