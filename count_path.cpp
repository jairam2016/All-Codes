#include <bits/stdc++.h>
using namespace std;
int c_path(int s,int end)
{
    if(s==end)
    {
        return 1;
    }
    if(s>end)
    {
        return 0;
    }
    else
    {
        int count=0;
        for(int i=1;i<=3;i++)
        {
            count=count+c_path(s+i,end);
        }
        return count;
    }
}
int main()
{
    int s=1;
    int end=3;
    cout<<c_path(s,end)<<endl;
    return 0;
}