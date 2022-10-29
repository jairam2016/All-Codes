#include <bits/stdc++.h>
using namespace std;
void substring(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    else
    {
        char ch=s[0];
        string ros=s.substr(1);

        substring(ros,ans);
        substring(ros,ans+ch);
    }
}
int main()
{
    string str="ABC";
    substring(str,"");
    return 0;
}