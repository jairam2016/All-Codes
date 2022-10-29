#include<bits/stdc++.h>
using namespace std;
int get_max_area(int arr[],int len)
{
    int ans=0,i=0;
    stack<int> st;
    while(i<len)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            int t=st.top();
            int h=arr[t];
            st.pop();
            if(st.empty())
            {
                ans=max(ans,h*i);
            }
            else
            {
                int hei=i-st.top()-1;
                ans=max(ans,h*hei);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{
    int arr[]={2,1,8,6,7,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    int m=get_max_area(arr,len);
    cout<<"\nLARGEST AREA IS "<<m;
    return 0;
}