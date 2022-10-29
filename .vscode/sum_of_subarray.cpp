#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int sum=0,c=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int k=len-1;
    for(int i=0;i<len;i++)
    {
        int temp=0;
        for(int j=i;j<len;j++)
        {
            cout<<"\t"<<arr[j];
            temp=temp+arr[j];
            sum=sum+temp;
        }
    }
    cout<<"\nSUM IS :"<<sum;
    return 0;
}