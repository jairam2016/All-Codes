#include <bits/stdc++.h>
using namespace std;
int sorted(int arr[],int size)
{
    if(size<1)
    {
        return 1;
    }
    else
    {
        if(arr[size-2] > arr[size-1])
        {
            return 0;
        }
        else
        {
            return sorted(arr,size-2);
        }
    }    
}
int main()
{
    int arr[]={1,3,6,8,9,11,12,13,14,16,17,20,21,23,22};
    int size=(sizeof(arr))/sizeof(arr[0]);
    if(sorted(arr,size))
    {
        cout<<"\nSORTED ARRAY";
    }
    else
    {
        cout<<"\nNOT SORTED ARRAY";
    }
    return 0;
}