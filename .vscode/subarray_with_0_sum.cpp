#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,-1,3,2,-2,-8,1,7,10,23};
    int size=(sizeof(arr)/sizeof(int));
    unordered_map<int,int> mpp;
    int sum=0;
    int m=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(sum==0)
        {
            m=max(m,i);
        }
        else if(mpp.find(sum)!=mpp.end())
            {
                m=max(m,i-mpp[sum]);
            }
        else
            {
                mpp[sum]=i;
            }
    }
    cout<<m;
    return 0;
}
// THIS IS BASICALLY THE CONSECUTIVE SUM STRATEGY EVERY ELEMENT IS ADDED CONSECUTIVELY AND THE WHOLE MAP IS CHECKED WETHER THE SAME EXSISTS OR NOT