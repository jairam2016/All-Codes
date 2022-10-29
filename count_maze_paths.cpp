#include <bits/stdc++.h>
using namespace std;
int count_paths(int n,int i,int j)
{
    if(i==(n-1) && (j==(n-1)))
    {
        return 1;
    }
     if(i>=(n) || (j>=n))
    {
        return 0;
    } 
    return count_paths(n,i+1,j)+count_paths(n,i,j+1);
}
int main()
{
    int n=3;
    int i=0;
    int j=0;

    cout<<count_paths(3,0,0);

    return 0;
}