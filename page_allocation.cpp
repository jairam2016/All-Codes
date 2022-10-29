#include<bits/stdc++.h>
using namespace std;
int students_required(int arr[],int size,int mid)
{
    int count=1;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(sum>mid)
        {
            sum=arr[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={12,34,67,90};
    int size=4;
    int student=2;
    int mid=0;
    int start=arr[3];
    int end=0;
    end=accumulate(arr,arr+4,end);
    while(start<end)
    {
        mid=(start+end)/2;
        int stud=students_required(arr,size,mid);
        if(stud <= student)
        {
            end=mid;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<start;
    return 0;
}