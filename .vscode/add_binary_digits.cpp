#include <bits/stdc++.h>
using namespace std;
int main()
{   // WRONG HAS SOME ERRORS
    int a,b,a1,b1;
    cin>>a>>b;
    int ans,ans1,rem,r;
    int prevcarry=0;
    while(a>0 && b>0)
    {
        if(a%2==1 && b%2==1)
        {
            if(prevcarry==1)
            {
                ans=ans*10+1;
                prevcarry=1;
            }
            else
            {
                ans=ans*10+0;
                prevcarry=1;
            }
        }
        if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if(prevcarry==1)
            {
                ans=ans*10+0;
                prevcarry=1;
            }
            else
            {
                ans=ans*10+1;
                prevcarry=0;
            }
        }
        if(a%2==0 && b%2==0)
        {
            if(prevcarry==1)
            {
                ans=ans*10+1;
                prevcarry=0;
            }
            else
            {
                ans=ans*10+0;
                prevcarry=0;
            }
        } 
        a=a/10;
        b=b/10;       
    }
    while(a>0)
    {
       if(prevcarry==1)
       {
        ans=ans*10+1;
        prevcarry=0;
       }
       else
       {
        ans=ans*10+0;
        prevcarry=0;
       }
       int rem=a%10;
       ans=ans*10+rem;
       a=a/10;  
    }
    while(b>0)
    {
        if(prevcarry==1)
       {
        ans=ans*10+1;
        prevcarry=0;
       }
       else
       {
        ans=ans*10+0;
       }
       rem=b%2;
       ans=ans*10+rem;
       b=b/2;  
    }
    while(ans>0)
    {
        r=ans%2;
        ans1=(ans1*10)+r;
        ans=ans/2;
    }
    cout<<ans;
    return 0;
}