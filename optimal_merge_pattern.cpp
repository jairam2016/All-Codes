#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,2,4,7};
    sort(arr,arr+4);
    int s=0;
    int c=0;
    for(int i=0;i<3;i++)
    {
        s=arr[i]+arr[i+1];
        arr[i+1]=s;
    }
    cout<<s;
    return 0;
}