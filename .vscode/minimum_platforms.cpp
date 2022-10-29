#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int,int> st;
    
    int arrival[]={900,940,950,1100,1500,1800};
    int depar[]={910,1200,1120,1130,1900,2000};
    sort(arrival,arrival+6);
    sort(depar,depar+6);
    int i=0,j=0;
    int count=0,maxi=0;
    while(i<6)
    {
        if(arrival[i]<=depar[j])
        {
            count++;
            maxi=max(maxi,count);
            i++;
        }
        else if(arrival[i]>depar[j])
        {
            count--;
            j++;
        }
    }
    cout<<maxi;
    return 0;
}