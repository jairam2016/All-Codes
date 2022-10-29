#include <bits/stdc++.h>
using namespace std;
int main()
{
    int search, flag = -1;
    int mid, start = 0, end = 10;
    int arr[10] = {14, 21, 22, 27, 50, 57, 74, 75, 85, 92};
    cout << "\nELEMENT YOU WANT TO SEARCH: ";
    cin >> search;
    int num = 10;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (search == arr[mid])
        {
            flag = 1;
            break;
        }
        if (search > arr[mid])
        {
            start = mid + 1;
        }
        if (search < arr[mid])
        {
            end = mid - 1;
        }
    }
    if (flag == 1)
    {
        cout << "\nFOUND AT POSITION " << mid + 1;
    }
    else
    {
        cout << "\nNOT FOUND";
    }
    return 0;
}