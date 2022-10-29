#include <bits/stdc++.h>
using namespace std;
class employee
{
    private:
        int a,b,c;

    public:
        int d,e;
        void setdata(int a,int b, int c);
        void getdata()
        {
            cout<<"\nTHE VALUE OF a IS "<<a;
            cout<<"\nTHE VALUE OF b IS "<<b;
            cout<<"\nTHE VALUE OF c IS "<<c;
            cout<<"\nTHE VALUE OF d IS "<<d;
            cout<<"\nTHE VALUE OF e IS "<<e;
        }
};

void employee::setdata(int a1,int b1,int c1)//:: SCOPE RESOLUTION OPERATOR
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee harry;
    harry.d=34;
    harry.e=123;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}