#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,5,3,-7,-5,9,14,3,3,11,10};

    int max=*max_element(arr,arr+11);
    cout<<max<<endl;

    int min=*min_element(arr,arr+11);
    cout<<min<<endl;
                                                            
    int sum=0;
    sum=accumulate(arr,arr+11,0);
    cout<<sum<<endl;

    int ct=count(arr,arr+11,3);
    cout<<ct<<endl;

    string str="JAI RAM MICROSOFT";
    reverse(arr,arr+11);
    for(auto it:arr)
    {
        cout<<it<<"  ";
    }
    reverse(str.begin(),str.end());
    return 0;
}