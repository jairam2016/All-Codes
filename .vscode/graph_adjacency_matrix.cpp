#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes,edges;
    cout<<"\nENTER THE NUMBER OF NODES: ";
    cin>>nodes;                            
    cout<<"\nENTER THE NUMBER OF EDGES: ";
    cin>>edges;
    int vec[8][8]={0};
    for(int i=0;i<edges;i++)
    {
        int start,end;
        cin>>start>>end;
        vec[start][end]=1;
        vec[end][start]=1;
        start=end=0;     
    }
    cout<<"\nTHE ADJACENECY MATRIX IS :\n";
    for(int i=1;i<nodes;i++)
    {
        for(int j=1;j<nodes;j++)
        {
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}