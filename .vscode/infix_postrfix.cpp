#include<bits/stdc++.h>
using namespace std;
int priority(char ch)
{
    if(ch=='*' || ch=='/')
    {
        return 5;
    }
    if(ch=='+' || ch=='-')
    {
        return 3;
    }
    else
        return 0;
}
int main()
{
    string str="(a-b*c/k+d)";
    stack<char> st;
    char x;
    int len=str.length();
    int i=0;
    while(i!=len-1)
    {
        char ch=str.at(i);
        if(isalnum(ch))
        {
            cout<<ch;
        }
        if(ch=='(')
        {
            st.push(ch);
        }
        if(ch==')')
        {
            while(st.top() !='(')
            {
                x=st.top();
                st.pop();
                if(x!='(')
                    cout<<x;
            }
        }
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            char cmp=st.top();
            if(priority(cmp)>priority(ch))
            {
                x=st.top();
                if(x!='(')
                    cout<<x;
                st.pop();
            }
            st.push(ch);
        }
        i++;
    }
    while(st.top()!=-1)
    {
        x=st.top();
        if(x!='(')
                    cout<<x;
        st.pop();
    }
    return 0;
}