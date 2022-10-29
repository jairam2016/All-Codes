#include<bits/stdc++.h>
using namespace std;
int main()
{
    long nodes,edges;
    cout<<"\nENTER THE NUMBER OF NODES: ";
    cin>>nodes;                            
    cout<<"\nENTER THE NUMBER OF EDGES: ";
    cin>>edges;
    vector<long> adj[nodes+1]; // ARRAY OF VECTORS
    for(int i=0;i<edges;i++)
    {
        int start,end;
        cin>>start>>end;
        adj[start].push_back(end);
        adj[end].push_back(start);    
    } 
    cout<<"\nTHE ADJACENCY LIST IS:\n";
    vector<long>:: iterator it;
    for(int i=1;i<=nodes;i++)
    {
        cout<<i<<"-> ";
        for(it=adj[i].begin();it!=adj[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}