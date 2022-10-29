#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,3,8,11,7,5,17,14,12,10,25,21,20,22};
    sort(arr,arr+15);
    for(int i=0;i<15;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}