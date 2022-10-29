#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50]={10,20,30,35,42,46,85,74,11,12};
    int *ptr=(arr);
    arr[0]=5;
    cout<<*(arr);
    cout<<endl<<sizeof(ptr);
    return 0;
}