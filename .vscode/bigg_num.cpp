#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,rev=0;
    string str;
    cout<<"\nENTER NUMBER TO GET BIGGEST NUMBER: ";
    cin>>x;
    str=to_string(x);
    // sort(str.begin(),str.end(),greater<char>()); DIRECT CONVERSION
    cout<<str<<endl;
    int y=stoi(str);
    while(y>0)
    {
        int rem=y%10;
        rev=(rev*10)+rem;
        y=y/10;
    }
    cout<<rev;
    return 0;
}