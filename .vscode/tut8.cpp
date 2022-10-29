#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //constants in C++
    const float a=3.141;
    int b=7815423,c=25,d=9;
    //NOW VALUE OF A CAN NEVER BE CHANGED BY APPLYING CONST
    // a = 45.258;
    // a = 47.36;
    cout<<a;

    cout<<"\nTHE VALUE OF B WITHOUT SETW IS "<<b;
    cout<<"\nTHE VALUE OF C WITHOUT SETW IS "<<c;
    cout<<"\nTHE VALUE OF D WITHOUT SETW IS "<<d;

    cout<<"\nTHE VALUE OF B USING SETW IS "<<setw(10)<<b;
    cout<<"\nTHE VALUE OF C USING SETW IS "<<setw(10)<<c;
    cout<<"\nTHE VALUE OF D USING SETW IS "<<setw(10)<<d;
    return 0;
}