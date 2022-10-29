#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"\nENTER ROW NO. OF FIRST MATRIX: ";
    cin>>n1;
    cout<<"\nENTER COLOUMN NO. OF FIRST MATRIX: ";
    cin>>n2;
    cout<<"\nENTER COLOUMN NO. OF SECOND MATRIX: ";
    cin>>n3;
    int arr1[n1][n2], arr2[n2][n3], ans[n1][n3];
    cout<<"\nVALUES OF FIRST MATRIX: ";
    for (int i = 0; i< n1; i++)
    {
        for (int j = 0; j< n2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout<<"\nVALUES OF SECOND MATRIX: ";
    for (int i = 0; i< n2; i++)
    {
        for (int j = 0; j< n3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i< n1; i++)
    {
        for (int j = 0; j< n3; j++)
        {
            ans[i][j]=0;
        }
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]=ans[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
    }

    cout<<"\nMATRIX MULTIPLICATION ANSWER IS:\n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}