#include<iostream>
using namespace std;
int c=45; //LOCAL IS PREFERRED OVER GLOBAL
int main()
{
    int a,b,c;
    float d=34.4f;
    long double e=3.1414789;
    cout<<"\nENTER THE VALUE OF A:";
    cin>>a;
    cout<<"\nENTER THE VALUE OF B:";
    cin>>b;
    cout<<"\nENTER THE VALUE OF C:";
    cin>>c;
    cout<<"\nENTER THE VALUE OF D:";
    cin>>d;
    cout<<"\nTHE SUM IS "<<(a+b+(::c)+d+e)<<endl;
    // :: OPERATOR IS USED TO ACCESS THE GLOBAL VARIABLE
    cout<<"\nTHE SUM IS "<<(a+b+(c)+d+e)<<endl;
    //ROUNDED OFF VALUE IS
    cout<<"\nTHE SUM IS "<<(int)(a+b+(::c)+d+e)<<endl;

    //REFERANCE VARIABLES 
    // &y = v
    float v=455.3698;
    float &y= (v) ;
    cout<<"the value of v is "<<v<<"\n"<<"the value of y is "<<y;
    return 0;
}