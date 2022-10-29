#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,-2,3,-4,5};
    int len=(sizeof(arr)/sizeof(int));
    int temp=arr[0];
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];        //THIS FOR {2,3,4,5,1}
    }
    arr[len-1]=temp;
    int sum=0;
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    cout<<endl<<sum;
    return 0;
} 