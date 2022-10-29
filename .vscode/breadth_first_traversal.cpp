#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes,edges;
    cout<<"\nENTER THE NUMBER OF NODES: ";
    cin>>nodes;                            
    cout<<"\nENTER THE NUMBER OF EDGES: ";
    cin>>edges;
    vector<int> adj[nodes+1];
    for(int i=0;i<edges;i++)
    {
        int start,end;
        cin>>start>>end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
    cout<<"\nTHE BREATH FIRST SEARCH IS:\n";
    queue<int> que;
    vector<int> vis(nodes+1,0);
    vis[1]=1;
    que.push(1);
    while(!que.empty())
    {
        int node=que.front();
        que.pop();
        cout<<node<<"  ";

        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it]=1;
                que.push(*it);
            }
        }
    }
    return 0;
}