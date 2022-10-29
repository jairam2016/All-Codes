#include <bits/stdc++.h>
using namespace std;
int c = 0;
vector<int> vec;
double get_median(int val)
{
    vec.push_back(val);
    sort(vec.begin(), vec.end());
    c = c + 1;
    if (c % 2 == 1)
    {
        int x = c / 2;
        return vec[x];
    }
    if (c % 2 == 0)
    {
        int x = c / 2;
        double y = (vec.at(x) + vec.at(x - 1)) / 2.00;
        return y;
    }
}
int main()
{
    int arr[] = {10, 15, 21, 30, 18, 19};
    // sort(arr,arr+6);
    for (int i = 0; i < 6; i++)
    {
        double med = (get_median(arr[i]));
        cout << med << "  ";
    }
    return 0;
}