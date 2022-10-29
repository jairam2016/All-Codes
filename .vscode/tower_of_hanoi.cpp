#include <bits/stdc++.h>
using namespace std;
void tower_hanoi(int n,string src,string tem,string dest)
{
    if(n==0)
    {
        return;
    }
    else
    {
        tower_hanoi(n-1,src,tem,dest);
        cout<<n<<" MOVED FROM "<<src<<" TO "<<dest<<endl;
        tower_hanoi(n-1,tem,dest,src);
    }
}
int main()
{
    int n=3;
    string src="source";
    string tem="temp";
    string dest="destination";
    tower_hanoi(n,src,tem,dest);
    return 0;
}