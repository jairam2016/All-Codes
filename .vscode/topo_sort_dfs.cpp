#include<bits/stdc++.h>
using namespace std;
vector<int> vec[100];
vector<int> vis(100,0);
queue<int> st;
void print()
{
    while(st.empty()==false)
    {
        cout<<st.front()<<"   ";
        st.pop();
    }
}
void dfs(int node)
{
    st.push(node);
    vis[node]=1;

    vector<int> :: iterator it;
    for(it=vec[node].begin();it!=vec[node].end();it++)
    {
        if(!vis[*it])
        {
            dfs(*it);
        }
    }
}
int main()
{
    int nodes,edges;
    cout<<"\nENTER THE NUMBER OF NODES: ";
    cin>>nodes;                            
    cout<<"\nENTER THE NUMBER OF EDGES: ";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int start,end;
        cin>>start>>end;
        vec[start].push_back(end);
    }
    dfs(0);
    print();
    return 0;
}