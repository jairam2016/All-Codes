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

    int left = 0, top = 0, right = coloumns - 1, bottom = rows - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << "  ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << "  ";
        }
        right--;
        ;

        if (left <= right)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << "  ";
            }
            bottom--;
        }

        if (top <= bottom)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << "  ";
            }
            left++;
        }
    }
    return 0;
}