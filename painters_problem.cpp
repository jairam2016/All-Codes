#include<bits/stdc++.h>
using namespace std;
int no_of_painters(int arr[],int size,int mid)
{
    int total=0,count=1;
    for(int i=0;i<size;i++)
    {
        total=total+arr[i];
        if(total>=mid)
        {
            total=arr[i];
            count=count+1;
        }
    }
    return count;
}
int main()
{
    int arr[]={10,20,30,40,50,70};
    int n=6;
    int p=3;   
    int res=0;
    int low=arr[5];
    cout<<low<<"    ";
    int high=0;
    int mid=0;
    high=accumulate(arr,arr+6,high);
    cout<<high;
    while(low<high)
    {
        mid=(high+low)/2;
        int painters=no_of_painters(arr,n,mid);
        if(painters<=p)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<endl<<low-1;
    return 0;
}