#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
    cout<<"1"<<endl;
    return a+b;
}
float sum(float a,float b,float c)
{
    cout<<"2"<<endl;

    return a+b+c;
}
float sum(float a,float b)
{
    cout<<"3"<<endl;

    return ((a+b)/2.00);
}
int main()
{
    float a,b;
    cout<<"\nENTER THE FIRST NUMBER";
    cin>>a;
    cout<<"\nENTER THE SECOND NUMBER";
    cin>>b;
    int s=sum(a,b);
    float su=sum(a,b,1.561);
    // float mid=sum(a,b);
    cout<<endl<<s;
    cout<<endl<<su;
    // cout<<endl<<mid;
    return 0;
}