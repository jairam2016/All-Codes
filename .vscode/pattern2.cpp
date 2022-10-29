#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z=1;
    for(int i=1;i<=8;i++)
    {
        for(int j=7;j>=i;j--)
        {
            cout<<"  ";
        }
        for(int k=z;k>=1;k--)
        {
            cout<<" "<<(abs(k-i)+1);
        }
        z=z+2;
        cout<<endl;
    }
    return 0;
}