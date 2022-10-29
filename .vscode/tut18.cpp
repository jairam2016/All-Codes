#include <bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int num;
    cout<<"\n"<<"ENTER THE NUMBER FOR FACTORIAL:";
    cin>>num;
    int pro=factorial(num);
    cout<<"THE FACTORIAL OF NUMBER IS : "<<pro;
    return 0;
}