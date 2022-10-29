#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    int num=1;
    for(int i=0;i<6;i++)
    {
        for(int s=1;s<6-i;s++)
        {
            cout<<"   ";
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
                c=1;
            }
            else
            {
                c=(c*(i-j+1))/j;
            }
            cout<<"   "<<c<<"  ";
        }
        cout<<endl;
    }
    return 0;
}