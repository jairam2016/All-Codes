#include<bits/stdc++.h> 
using namespace std;
void mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int N;
    cin>>N;
    vector<pair<int,int>> vec;
    // vector<int> :: iterator it;
    for(int i=0;i<N-1;i++)
    {
        if(intervals[1][i] < intervals[0][i+1])
        {
            vec.push_back(make_pair(intervals[0][i],intervals[1][i+1]));
        }
    }

    vector<pair<int,int>> :: iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<it->first<<"  "<< it->second;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    mergeIntervals(vec);
    return 0;
}
