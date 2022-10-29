#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z=1;
    for(int i=1;i<=10;i++)
    {
        for(int j=10;j>=i;j--)
        {
            cout<<"  ";
        }
        for(int k=z;k>=1;k--)
        {
            cout<<" *";
        }
        z=z+2;
        cout<<"\n";
    }
    return 0;
}