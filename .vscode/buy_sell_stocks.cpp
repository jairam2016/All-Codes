#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first=0;
    int profit=0;
    int max_profit=0;
    for(int i=0;i<n;i++)
    {
        first=arr[i];
        for(int j=i+1;j<n;j++)
        {
            profit=arr[j]-first;
            max_profit=max(max_profit,profit);
        }
    }
    cout<<max_profit ;
    return 0;
}