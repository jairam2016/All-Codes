#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int target=3;
    int row=3;
    int col=0;
    while(row<4 && col>=0)
    {
        if(arr[row][col]==target)
        {
            cout<<"ELEMENT EXITS AT "<<row+1<<"  "<<col+1;
            exit(0);
        }
        if(arr[row][col] > target)
        {
            row--;
        }
        else
        {
            col++;
        }
    }
    cout<<"\nELEMENT NOT FOUND";
    return 0;
}