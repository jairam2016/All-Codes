#include <bits/stdc++.h>
using namespace std;
void permutation(string str , string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            string ros=str.substr(0,i)+str.substr(i+1);

            permutation(ros,ans+ch);
        }
    }
}
int main()
{
    string str="ABCD";
    permutation(str,"");
    return 0;
}