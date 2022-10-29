#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,5,6,7,89,10,11,0,1,2,3};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int ele=2;

    int low=0;
    int high=size-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            cout<<"ELEMENT FOUND "<<mid+1;
            exit(0);
        }
        if(arr[low]<=arr[mid])
        {
            if(ele>=arr[low] && ele<=arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(ele>=arr[mid] && ele<=arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    cout<<"NOT FOUND";
    return 0;
}