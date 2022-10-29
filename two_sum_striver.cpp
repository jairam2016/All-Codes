#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2 ,-3 ,3 ,3 ,-2};
    int size=5;
    int s=0,k=0,l=0;
    vector<vector<int>> ans;
    vector<int>vec;
    vector<int> :: iterator it;
    for(int i=0;i<5;i++)
    {
        int lef=s-arr[i];
        it=find(vec.begin(),vec.end(),lef);
        if(it!=vec.end())
        {
            ans[k].push_back(arr[i]);
            ans[k].push_back(lef);
            k++;
        }
        else
        {
            vec.push_back(arr[i]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;i<5;j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}