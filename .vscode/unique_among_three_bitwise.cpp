#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,4,3,6,6,6,7,1,1,9,1,7,7,3,4,4};
    int len=sizeof(arr)/sizeof(int);
    int one=0;
    int two=0;
    int common;
    for(int i=0;i<len;i++)
    {
        two=two | (one & arr[i]);// | -> THIS IS BIT WISE OR OPERATOR || -> THIS IS LOGICAL OR OPERATOR
        one=(one ^ arr[i]);
        common=one & two;
        one=one & ~(common);
        two=two & ~(common);
    }
    cout<<"\n"<<one;
    return 0;
}