#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="**(()";
    int count=0,star_count=0,diff=0;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            count=count+1;
        }
        if(str[i]==')')
        {
            count=count-1;
        }
        if(str[i]=='*')
        {
            star_count=star_count+1;
        }
    }
    if(star_count<abs(count))
    {
        cout<<"\nINVALID PARENTHESIS";
    }
    else
    {
        cout<<"\nVALID PARENTHESIS";
    }
    return 0;
}