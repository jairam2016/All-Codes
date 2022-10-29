#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int n=0,l=0,maximum=0,start=0;;
    cin>>n;
    cin.ignore();
    cin.getline(arr,n);
    for(int i=0;arr[i]='\0';i++)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(l>maximum)
            {
                maximum=l;
                start=i-1;
                l=0;
            }
            else
                l=0;
        }
        l++;
    }
    for(int i=start;i!='\0';i--)
    {
        cout<<arr[i];
    }
    return 0;
}