#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,5,10,20,40,80};
    int arr2[]={6,7,20,80,100};
    int arr3[]={3,4,15,20,30,70,80};
    int x=0,y=0,z=0;
    int len1=sizeof(arr1)/sizeof(int);
    int len2=sizeof(arr2)/sizeof(int);
    int len3=sizeof(arr3)/sizeof(int);
    while(x<len1 && y<len2 && z<len3)
    {
        if(arr1[x]==arr2[y] && arr2[y]==arr3[z])
        {
            cout<<arr1[x]<<"    ";
            x++,y++,z++;
        }
        else if(arr1[x]<arr2[y])
        {
            x++;
        }
        else if(arr3[z]<arr2[y])
        {
            z++;
        }
        else
            y++;
    }
    return 0;
}