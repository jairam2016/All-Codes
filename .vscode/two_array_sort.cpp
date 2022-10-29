#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    int len1=sizeof(arr1)/sizeof(int);
    int len2=sizeof(arr2)/sizeof(int);
    int c1=0,c2=0;
    while(c1!=3 && c2!=4)
    {
        if(arr1[c1]<arr2[c2])
        {
            cout<<arr1[c1]<<"   ";
            c1=c1+1;
        }
        if(arr1[c1]>arr2[c2])
        {
            cout<<arr2[c2]<<"   ";
            c2=c2+1;
        }
    }
    while(c1!=len1)
    {
        cout<<arr1[c1]<<"   ";
        c1++;
    }
    while(c2!=len2)
    {
        cout<<arr2[c2]<<"   ";
        c2++;
    }
    return 0;
}