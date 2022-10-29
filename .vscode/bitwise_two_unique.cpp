#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,4,4,7,8,8,10,6,6,14,14};
    int n1[10]={0};
    int n2[10]={0};
    for(int i=0;i<12;i++)
    {
        if(arr[i]&1==1)
        {
            n1[i]=arr[i];
        }
        else
        {
            n2[i]=arr[i];
        }
    }
    int len1=sizeof(n1)/sizeof(int);
    int xor1=0;
    for(int i=0;i<len1;i++)
    {
        xor1=(xor1^n1[i]);
    }
    cout<<xor1<<endl;
    int len2=sizeof(n2)/sizeof(int);
    int xor2=0;
    for(int i=0;i<len2;i++)
    {
        xor2=(xor2^n2[i]);
    }
    cout<<xor2;
    return 0;
}