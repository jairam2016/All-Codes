#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,2,6,1,8,11,25,3,17,11};
    int next[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    stack<int>st;
    for(int i=0;i<11;i++)
    {
        if(st.empty())
        {
            st.push(i); // WE ARE PUSHING THE INDEX OF THE ARRAY
        }
        else
        {
            while(!st.empty())
                {
                    if(arr[i]>arr[st.top()])
                    {
                        next[st.top()]=arr[i];
                        st.pop();
                    }
                    else
                        break;
                }
            st.push(i);
        }
    }   
    for(int i=0;i<11;i++)
    {
        cout<<next[i]<<"  ";
    }
    return 0;
}