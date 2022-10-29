#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,1,3,5};
    int len=(sizeof(arr)/sizeof(arr[0]));
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(i<j && arr[i]>arr[j])
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count=count+1;
            }
        }
    }
    cout<<count;
    return 0;
}