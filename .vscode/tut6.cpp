#include<iostream>
using namespace std;
int main()
{
    int a=9,b=15;
    cout<<"\nTYPE OF OPERATORS IN C++\n";
    //AIRTHEMATIC OPERATOR
    cout<<"THE VALUE OF A+B IS "<<(a+b)<<endl;
    cout<<"THE VALUE OF A-B IS "<<(a-b)<<endl;
    cout<<"THE VALUE OF A/B IS "<<(a/b)<<endl;
    cout<<"THE VALUE OF A*B IS "<<(a*b)<<endl;
    cout<<"THE VALUE OF B%A IS "<<(b%a)<<endl;
    cout<<"THE VALUE OF A++ IS "<<(a++)<<endl;
    cout<<"THE VALUE OF A-- IS "<<(a--)<<endl;
    cout<<"THE VALUE OF ++A IS "<<(++a)<<endl;
    cout<<"THE VALUE OF --A IS "<<(--a)<<endl;

    //ALWAYS USE PARANTHESIS IN OUPUTS
    //COMPARISSION OPERATORS RETURNS IN 0 OR 1
    cout<<"THE VALUE OF a==b "<<(a==b)<<endl;
    cout<<"THE VALUE OF a>=b "<<(a>=b)<<endl;
    cout<<"THE VALUE OF a<=b "<<(a<=b)<<endl;
    cout<<"THE VALUE OF a!=b "<<(a!=b)<<endl;
    cout<<"THE VALUE OF a>b "<<(a>b)<<endl;
    cout<<"THE VALUE OF a<b "<<(a<b)<<endl;

    //LOGICAL OPERATORS
    cout<<"\nA>=B && B>=A IS "<<(a>=b && b>=a)<<endl;
    cout<<"\nA!=B || B<=A IS "<<(a!=b && b<=a)<<endl;
    cout<<"\nA>=B && B>=A IS "<<(!(a>=b && b>=a))<<endl;
    return 0;
}