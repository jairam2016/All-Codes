#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,7,5,6,9,4,2,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    int given_sum=19;
    int temp=0;
    int sum;
    int m,n;
    for(int i=0;i<len;i++)
    {
        temp=0;
        for(int j=i;j<len;j++)
        {
            temp=temp+arr[j];
            if(temp==given_sum)
            {
                cout<<i+1<<"\t"<<j+1;
                exit(0);
            }
        }
    }
    return 0;
}