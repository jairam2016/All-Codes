#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,-1,2,-1,2,-1};
    int size=sizeof(arr)/sizeof(int);
    unordered_set<int> st;
    int pre=0;
    int c=0;
    for(int i=0;i<size;i++)
    {
        pre=pre+arr[i];
        if(pre==0 || st.find(pre)!=st.end())
        {
            c=c+1;
        }
        st.insert(pre);
    }
    cout<<c;
    return 0;
}