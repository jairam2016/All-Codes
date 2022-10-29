#include <bits/stdc++.h>
using namespace std;
class complex_add
{
    int a,b;

    public: 
            void getdata();
            void setdata(int,int,complex_add);
            complex_add add_sum(complex_add,complex_add);
            void printing(complex_add);
};
void complex_add ::getdata()
{
    int a1,b1;
    cout<<"\nENTER THE VALUE OF THE REAL PART: ";
    cin>>a1;
    cout<<"\nTHE VALUE OF THE IMAGINARY PART: ";
    cin>>b1;
    a=a1;
    b=b1;
}
complex_add complex_add::add_sum(complex_add obj1,complex_add obj2)
{
    complex_add obj3;
    obj3.a=obj1.a+obj2.a;
    obj3.b=obj1.b+obj2.b;
    printing(obj3);
}
void complex_add::printing(complex_add obj5)
{
    cout<<"\nTHE SUM IS "<<obj5.a<<" +i "<<obj5.b;
}
int main()
{
    complex_add obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3.add_sum(obj1,obj2);
    return 0;
}