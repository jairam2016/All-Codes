#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    int n,l=0,sum=0;
    getline(cin,arr);
    int len=arr.length();
    for(int i=0;i<len;i++)
    {
        if(int(arr.at(len-i-1))>=48 && int(arr.at(len-i-1))<=57)
        {
            n=int(arr.at(len-i-1))-48;
        }
        if(int(arr.at(len-i-1))>=65 && int(arr.at(len-i-1))<=70)
        {
            n=int(arr.at(len-i-1))-65+10;
        }
        sum=sum+pow(16,l)*n;
        l++;
    }
    cout<<"\n"<<sum;
    return 0;
}