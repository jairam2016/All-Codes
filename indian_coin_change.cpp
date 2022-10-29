#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,5,10,20,50,100,200,500,1000,2000};
    int size=(sizeof(arr)/sizeof(arr[0]));
    sort(arr,arr+size);
    reverse(arr,arr+size);
    int amt=503 ;
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans+(amt/arr[i]);
        amt=amt-amt/arr[i]*arr[i];
    }
    cout<<ans;
    return 0;
}