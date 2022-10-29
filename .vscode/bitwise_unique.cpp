#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,3,4,5,6,5,6},s=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int xorsum=0;
    for(int i=0;i<len;i++)
    {
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum;
    cout<<"\n"<<(5&1);
    return 0;
}                                                                                                           