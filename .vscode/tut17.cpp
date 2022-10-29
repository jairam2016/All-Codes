#include <bits/stdc++.h>
using namespace std;
void sum(int *a,int *b,int c=5)//DEFAULT ARGUEMENTS
{
    *a=*a+*b+c;
}
int main()
{
    int a,b,c;
    int *ptr=&a;
    int *ptr1=&b;
    cout<<"\n"<<"ENTER THE FIRST NUMBER:";
    cin>>a;
    cout<<"\n"<<"ENTER THE SECOND NUMBER:";
    cin>>b;
    sum(ptr,ptr1);
    cout<<endl<<a; 
    sum(ptr,ptr1,22);
    cout<<endl<<a;
    return 0;
}