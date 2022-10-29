#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    else
    {
        string ros=s.substr(1);
        reverse(ros);
        cout<<s[0];
    }
}
int main()
{
    string s="JAI RAM";
    reverse(s);
    return 0;
}