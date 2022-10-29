#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p[4];
    p[1]={1,3};
    p[2]={2,4};
    p[3]={6,8};
    p[4]={9,10};
    for(int i=1;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(p[i].second>p[j].first)
            {
                cout<<"\nOVERLAPPING FOUND\n";
                
            }
        }
    }
    return 0;
}