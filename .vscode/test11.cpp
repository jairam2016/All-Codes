#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int T=0,N,K,S=0,len=0;
	// cin>>T;
	// while(T--)
	{
	   cin>>N>>K>>S;
        int arr[N],c1=0,c2=0,sum1=0,sum2=0;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            if((sum1+arr[i])<S)
            {
                sum1=sum1+arr[i];
                c1=c1+1;
            }
            else if((sum2+arr[i])<S)
            {
                sum2=sum2+arr[i];
                c2=c2+1;
            }
        }
        cout<<c1+c2; 
	}
	
	return 0;
}
