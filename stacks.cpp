#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    cout<<st.size()<<endl;
    while(st.empty()==false)
    {
        int val=st.top();
        cout<<val<<"    ";
        st.pop();
    }
    return 0;
}