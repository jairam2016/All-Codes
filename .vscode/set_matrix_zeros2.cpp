#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int arr[N][M];
    bool row=false,col=false;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<N;i++)
    {
        if(arr[i][0]==0)
        {
            row=true;
        }
    }

    for(int i=0;i<M;i++)
    {
        if(arr[0][i]==0)
        {
            col=true;
        }
    }

    for(int i=1;i<N;i++)
    {
        for(int j=1;j<M;j++)
        {
            if(arr[i][j]==0)
            {
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }

    for(int i=1;i<N;i++)
    {
        if(arr[i][0]==0)
        {
            for(int j=0;j<M;j++)
            {
                arr[i][j]=0;
            }
        }
    }

    for(int i=1;i<M;i++)
    {
        if(arr[0][i]==0)
        {
            for(int j=0;j<N;j++)
            {
                arr[j][i]=0;
            }
        }
    }

    if(row)
    {
        for(int i=0;i<N;i++)
        {
            arr[0][i]=0;
        }
    }

    if(col)
    {
        for(int i=0;i<M;i++)
        {
            arr[i][0]=0;
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}