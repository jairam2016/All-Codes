#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,0,1,0,1,1,1,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    int no_of_zeros=0,k=2,start=0,end=0,maxlen=0;
    while(end<len)
    {
        if(arr[end]==0)
        {
            no_of_zeros++;
        }
        if(no_of_zeros>k)
        {
            if(arr[start]==0)
            {
                no_of_zeros--;                                          
            }
            start++;
        }
        maxlen=max(maxlen,end-start+1);
        end++;
    }
    cout<<maxlen;
    return 0;
}                                     