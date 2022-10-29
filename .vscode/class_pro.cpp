#include <bits/stdc++.h>
using namespace std;
class library
{
    char mem_code;
    string mem_name;
    string doj;
    string address;
    string phno;
    string game;
    float fees;

    void read(void);
    int calc(int);
    void disp(void);
    void gameP(void);

    public:
            void access(void)
            {
                read();
                gameP();
            }
};
void library::read(void)
{
    cout<<"\nENTER YOUR NAME: ";
    getline(cin,mem_name);
    cout<<"\nENTER DATE OF JOINING: ";
    getline(cin,doj);
    cout<<"\nENTER THE ADDRESS: ";
    getline(cin,address);
    cout<<"\nENTER PHONE NUMBER: ";
    getline(cin,phno);
    cout<<"\nENTER THE MEMBER CODE: ";
    mem_code=getwchar();
}
int library::calc(int a)
{
    if((a==1) && (mem_code=='p' || mem_code=='P'))
    {
        int p=1000;
        return p;
    } 
    else if((a==1) && (mem_code=='t' || mem_code=='T'))
    {
        int p=1000*2;
        return p;
    }
    else if((a==2) && (mem_code=='p' || mem_code=='P'))
    {
        int p=2000;
        return p;
    }
    else if((a==2) && (mem_code=='t' || mem_code=='T'))
    {
        int p=2000*2;
        return p;
    }
    else if((a==3) && (mem_code=='p' || mem_code=='P'))
    {
        int p=2500;
        return p;
    }
    else if((a==3) && (mem_code=='t' || mem_code=='T'))
    {
        int p=2500*2;
        return p;
    }
    else if((a==4) && (mem_code=='p' || mem_code=='P'))
    {
        int p=500;
        return p;
    }
    else if((a==4) && (mem_code=='t' || mem_code=='T'))
    {
        int p=500*2;
        return p;
    }
}
void library::disp(void)
{
    cout<<"YOUR NAME "<<mem_name<<endl;
    cout<<"YOUR MEMBER CODE "<<mem_code<<endl;
    cout<<"YOUR DATE OF JOINING "<<doj<<endl;
    cout<<"YOUR ADDRESS "<<address<<endl;
    cout<<"YOUR PHONE NUMBER "<<phno<<endl;
}
void library::gameP(void)
{
    int ch;
    cout<<"\nENTER THE GAME YOU WANT TO PLAY:";
    cout<<"\n1.CRICKET";
    cout<<"\n2.TENNIS";
    cout<<"\n3.BADMINTON";
    cout<<"\n4.TABLE TENNIS";
    cout<<"\nENTER YOUR CHOICE: ";
    cin>>ch;
    cout<<endl<<endl;
    disp();
    switch(ch)
    {
        case 1:
                cout<<"\nYOUR CHOICE IS CRICKET";
                cout<<"\nPLEASE PAY " <<calc(1) << " AT THE COUNTER AND ENJOY.";
                break;

        case 2:
                cout<<"\nYOUR CHOICE IS TENNIS";
                cout<<"\nPLEASE PAY "<<calc(2)<<" AT THE COUNTER AND ENJOY.";
                break;

        case 3:
                cout<<"\nYOUR CHOICE IS BADMINTON";
                cout<<"\nPLEASE PAY "<<calc(3)<<" AT THE COUNTER AND ENJOY.";
                break;

        case 4:
                cout<<"\nYOUR CHOICE IS TABLE TENNIS";
                cout<<"\nPLEASE PAY "<<calc(4)<<" AT THE COUNTER AND ENJOY.";
                break;

    }
}
int main()
{
    library obj;
    obj.access();
    return 0;
}