#include <bits/stdc++.h>
using namespace std;
int main()
{
    //SWAPPING TWO ELEMENTS USING BITWISE
    int x=90,y=12;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<x<<"   "<<y;
    return 0;
}