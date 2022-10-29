#include<bits/stdc++.h>
using namespace std;
bool comparater(vector<int>&a,vector<int>&b)
{
    return a[1]<b[1];
}
int main()
{
    vector<vector<int>> vec;
    int n;
    cout<<"\nNO OF ACTIVITIES YOU WANT:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        vec.push_back({start,end});
    }
    // SORT ACCORDING TO THE ENDING TIMES of the ACTIVITIES
    sort(vec.begin(),vec.end(),comparater);
    int take=1;
    int end=vec[0][1];
    for(int i=1;i<n;i++)
    {
        if(vec[i][0]>=end)
        {
            take++;
            end=vec[i][1];
        }
    }
    cout<<take;
    return 0;
}