#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,-1,-3,5,3,6,7};
    int ans[10]={0};int j=0;
    for(int i=0;i<6;i++)
    {
        ans[j]=max(arr[j],max(arr[j+1],arr[j+2]));
        j++;
    }
    for(int i=0;i<j;i++)
    {
        cout<<ans[i]<<"  ";
    }
    return 0;
}