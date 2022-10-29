#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,8,9,2,6,7,6,8};
    int len=sizeof(arr)/sizeof(int);
    int count=0,sum=0;
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
        i=i+sum;
        count=count+1;
        if(sum>len)
        {
            cout<<"\nMINIMUM STEPS REQUIRED IS: "<<count;
            exit(0);
        }
    }
    return 0;
}