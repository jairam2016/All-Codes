#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=96;
    int *ptr=&a;
    cout<<endl<<ptr;

    // & is address of operator
    // * is the dereference operator

    cout<<endl<<&a;
    cout<<endl<<*ptr;
    // POINTER TO POINTER
    int **ptr1=&ptr;
    cout<<endl<<*ptr1<<endl<<&ptr1;
    cout<<endl<<**ptr1;

    return 0;
}