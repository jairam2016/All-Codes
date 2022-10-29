#include <bits/stdc++.h>
using namespace std;
class base
{
    int data1;
    public:
        int data2;
        base(){}
        void setdata();
        int  getdata1();
        int getdata2();
};
class derived : public base
{
    int data3;
    public: 
            void process();
            void display();
};
void base::setdata(void)
{
    data1=10;
    data2=20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
void derived::process()
{
    data3=data2*getdata1();
}
void derived::display()
{
    cout<<"\nVALUE OF DATA 1 IS :"<<getdata1();
    cout<<"\nVALUE OF DATA 2 IS :"<<data2;
    cout<<"\nVALUE OF DATA 3 IS :"<<data3;
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}