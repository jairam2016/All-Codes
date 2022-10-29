#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,ind=0,max=0;
    cout<<"\nENTER THE VALUE OF X: ";
    cin>>x;
    int arr[]={4,5,3,2,8,9};
    int a[6]={0};
    int m;
    cout<<"\nENTER THE VALUE OF M: ";
    cin>>m;
    for(int i=0;i<6;i++)                    
    {
        a[i]=(arr[i]+x)%m;
        if(max<a[i])
        {
            max=a[i];
            ind=i;
        }
    }
    cout<<arr[ind];
}