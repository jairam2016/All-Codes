#include<bits/stdc++.h>
using namespace std;
int main()
{
    int weidth=0,height=0,n=0;
    cout<<"\nNO OF TOWERS TO DEFEND THE KINGDOM: ";
    cin>>n;
    cout<<"\nWEIDTH OF THE TOWER: ";
    cin>>weidth;
    cout<<"\nHEIGHT OF THE TOWER: ";
    cin>>height;
    int x[weidth],y[height];
    for(int i=0;i<n;i++)
    {
        cout<<"\nENTER THE POSITION: ";
        cin>>x[i]>>y[i];
    }

    sort(x,x+n);
    sort(y,y+n);

    int dx=0,dy=0;

    dx=x[0]-1;
    dy=y[0]-1;

    for(int i=1;i<n;i++)
    {
        dx=max(dx,x[i]-x[i-1]-1);
        dy=max(dy,y[i]-y[i-1]-1);
    }

    dx=max(dx,weidth-x[n-1]);
    dy=max(dy,height-x[n-1]);
    cout<<dx*dy;

    return 0;
}