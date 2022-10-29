#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1 ,2 ,3 ,4 ,5 };
    int size=(sizeof(arr)/sizeof(int));
    map<int,int> mpp;
    sort(arr,arr+size);
    int target=5;
    for(int i=0;i<size;i++)
    {
        int target2=target-arr[i];
        int start=i+1;
        int back=size-1;
        while(start<back)
        {
            int mid=(start+back)/2;
            if(arr[mid]==target2)
            {
                cout<<arr[i]<<" "<<arr[mid]<<" ";
                break;
            }
            else if(arr[mid]<target2)
            {
                start=mid+1;
            }
            else
            {
                back=mid-1;
            }
        }
    }
    return 0;
}