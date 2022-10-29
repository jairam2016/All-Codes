#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele=0;
        cin>>ele;
        arr.push_back(ele);
    }
    int count=0;
    queue<int> qu;
    qu.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(qu.front()<arr[i])
        {
            qu.push(arr[i]);
        }
        for(int j=qu.front();j<=qu.back();j++)
        {
            if(arr[i]<j)
            {
                count++;
            }
        }
    }
    cout<<count;
}