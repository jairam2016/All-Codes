#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int given_sum=61;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        int sum=0,s=0;
        for(int j=(i+1);j<len;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==given_sum)
            {
                cout<<i+1<<"\t"<<j+1;
                exit(0);
            }
        }
    }
    cout<<"\nGIVEN PAIR SUM NOT FOUND";
    return 0;
}