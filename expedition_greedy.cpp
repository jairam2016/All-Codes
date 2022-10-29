#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first>b.first;
}
int main()
{
    vector<pair<int,int>> vpp;
    priority_queue<int> pq;
    int D=25,F=10;
    int no_of_stops=0;
    cout<<"\nENTER THE NUMBER OF STOPS: ";
    cin>> no_of_stops;
    for(int i=0;i<no_of_stops;i++)
    {
        int d=0,f=0;
        cin>>d>>f;
        vpp.push_back(make_pair(d,f));
    }
    for(int i=0;i<no_of_stops;i++)
    {
        vpp[i].first=D-vpp[i].first;
    }
    sort(vpp.begin(),vpp.end());
    int x=0,prev=0,ans=0;
    while(x<no_of_stops)
    {
        if(F>=(vpp[x].first-prev))
        {
            F=F-(vpp[x].first-prev);
            pq.push(vpp[x].second);
            prev=vpp[x].first;
        }
        else
        {
            if(pq.empty())
            {
                cout<<-1;
                exit(0);
            }
            else
            {
                F=F+pq.top();
                pq.pop();
                ans=ans+1;
                continue;
            }
        }
        x++;
    }
    D=D-vpp[no_of_stops-1].first;
    if(F>=D)
    {
        cout<<ans<<endl;
        exit(0);
    }
    else
    {
        while(F<D)
        {
            if(pq.empty())
                {
                    cout<<-1;
                    exit(0);
                }
            else
                {
                    F=F+pq.top();
                    pq.pop();
                    ans=ans+1;
                    continue;
                }
        }
    }
    cout<<ans;
    return 0;
}