#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, ans, temp;
    cout << "ENTER THE STRING:";
    getline(cin, str);
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            ans = ans + temp + ' ';
            temp = "";
        }
        else
        {
            temp = str[i] + temp;
        }
    }
    if (temp.length() > 0)
    {
        ans+=temp;
    }
    cout << ans;
    return 0;
}