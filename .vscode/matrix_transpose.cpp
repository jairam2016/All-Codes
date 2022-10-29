#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, coloumns;
    cout << "\nENTER THE NUMBER OF ROWS: ";
    cin >> rows;
    cout << "\nENTER THE NUMBER OF COLOUMS: ";
    cin >> coloumns;
    int arr[rows][coloumns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cin >> arr[i][j];
        }
    }
    int temp=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<coloumns;j++)
        {
            if((i!=j))
            {
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}