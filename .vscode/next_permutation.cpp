#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,5,4};int indx1=0,num1=0,temp=0;
    int len=(sizeof(arr)/sizeof(arr[0]));
    for(int i=len-1;i>=0;i--)
    {
        if(!(arr[i]<arr[i-1]))
        {
            indx1=i-1;
            num1=arr[indx1];
            break;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]>num1)
        {
            temp=arr[i];
            arr[i]=num1;
            arr[indx1]=temp;
            break;
        }
    }
    reverse(arr+indx1+1,arr+len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}