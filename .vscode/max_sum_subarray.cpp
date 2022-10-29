#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,4,7,-2};
    int len=sizeof(arr)/sizeof(arr[0]);
    int maxi=0,l=0,maximum=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            maxi=0;
            for(int k=i;k<=j;k++)
            {
                maxi=maxi+arr[k];
                maximum=max(maximum,maxi);  
            }
        }
    }
    cout<<endl<<maximum;
    return 0;
}