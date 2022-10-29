#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,4,7,-2,-5,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int ma=0,sum=0; //  INITIALIZATION OF ALL THE VARIABLES IS VERY IMPORTANT
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        ma=max(ma,sum);
    }
    cout<<"\n"<<ma;
    return 0;
}