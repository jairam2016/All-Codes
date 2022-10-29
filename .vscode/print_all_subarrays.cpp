#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,7,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<"  ";
            }
            cout<<endl;
        }
    }
    return 0;
}