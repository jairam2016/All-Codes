#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={100,80,60,70,75,85};
    int span[10]={0};
    stack<int>sp;
    sp.push(0);
    for(int i=0;i<6;i++)
    {
        while(!sp.empty() && arr[sp.top()]<=arr[i])
        {
            sp.pop();
        }
        if(sp.empty())
        {
            span[i]=i+1;
        }
        else
        {
            span[i]=i-sp.top();
        }
        sp.push(i);
    }
    for(int i=0;i<6;i++)
    {
        cout<<span[i]<<"    ";
    }
    return 0;
}