#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10, 1 ,0 ,3, 4, 7};
    int target=11;
    int size=6;
    int ans=0;
    for(int i=0;i<size;i++)
    {
        int prefix_sum=0;
        for(int j=i;j<size;j++)
        {
            prefix_sum=prefix_sum^arr[j];
            if(prefix_sum==target)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}