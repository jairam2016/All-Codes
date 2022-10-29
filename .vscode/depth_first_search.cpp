#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int>adj[N+1];       // SOME VARIABLES HAVE TO BE DECLARED AS CLASS TYPE IN USING BFS
vector<int>visit;       //INITIALIZE ALL THE VALUE OF THE VISITED VECTOR TO ZERO OR ELSE IT WONT EXECUTE
void dfs(int node)     // SINCE RECURSION HAS TO BE USED IN BFS SO SPECIAL FUNCTION HAS TO BE TAKEN
{
    visit[node]=1;
    cout<<node<<"   ";
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(!visit[*it])
        {
            dfs(*it);
        }
    }
}
int main()
{
    int root=adj[0].front();
    cout<<root;
    int nodes,edges;
    cout<<"\nENTER THE NUMBER OF NODES: ";
    cin>>nodes;                            
    cout<<"\nENTER THE NUMBER OF EDGES: ";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int start,end;
        cin>>start>>end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
    dfs(1);
    return 0;
}