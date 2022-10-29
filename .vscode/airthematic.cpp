#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,7,4,6,8,10,11}, c = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int m[len], max = 0, l = 0;
    for (int i = 0; i < len; i++)
    {
        c = 0;
        int diff = arr[i] - arr[i + 1];
        for (int j = i; j < len - 1; j++)
        {
            if (diff == (arr[j] - arr[j + 1]))
            {
                c = c + 1;
            }
            else
            {
                diff = 0;
                break;
            }
        }
        m[l] = c + 1;
        l++;
    }
    for (int i = 0; i < l; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
        }
    }
    cout << "\nTHE LENGTH OF LONGEST AIRTHEMATIC ARRAY IS : " << max;
    return 0;
}