#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,3,4,4,3,5,6,7,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int mini=99999;
    int m[77],l=0,num=0;
    for(int i=len-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                m[l++]=j;
            }
            else
            {
                m[l++]=999;
            }
        }
    }

    for(int i=0;i<=l;i++)
    {
        mini=min(mini,m[i]);
    }
    cout<<"\nTHE SMALLEST REPEATING ELEMENT IS OF "<<"POSITION "<<mini+1<<" ELEMENT IS "<<arr[mini];
    return 0;
}