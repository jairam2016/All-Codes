//          CATALAN NUMBER IS USED TO FIND DIFFERENT COMBINATIONS OF NODES IN A TREE
#include<bits/stdc++.h>
using namespace std;
int catalan(int num)
{
    if(num <= 1)
    {
        return 1;
    }
    int res=0;
    for(int i=0;i<=num-1;i++)
    {
        res+=catalan(i)*catalan(num-i-1);
    }
    return res;
}
int main()
{
    int total_no_of_nodes=catalan(3);
    cout<<total_no_of_nodes;
    return 0;
}