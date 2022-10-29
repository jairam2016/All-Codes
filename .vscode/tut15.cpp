#include <bits/stdc++.h>
using namespace std;
void g()
{
    cout<<endl<<"GOOD MORNING";
}
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"\n"<<"ENTER THE FIRST NUMBER:";
    cin>>a;
    cout<<"\n"<<"ENTER THE SECOND NUMBER:";
    cin>>b;
    int ret=sum(a,b);
    cout<<ret;
    g();
    return 0;
}