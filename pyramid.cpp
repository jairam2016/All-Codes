#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,c=1;
    for(int i=8;i>=1;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            cout<<"  ";
        }
        for(int k=1;k<=c;k++)
        {
            cout<<" *";
        }
        cout<<endl;
        c++;

    }
    return 0;
}