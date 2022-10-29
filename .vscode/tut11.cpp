#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="some text";
    int len=s.length();
    cout<<s<<"\t"<<len;
    s.resize(3,'*');
    cout<<"\n"<<s;
    s.resize(10,'*');
    cout<<"\n"<<s;
    cout<<"\n"<<s.at(3);//s.at(position);
    string s1="JAI RAM";
    string s2="JAJPUR";
    string s3=s+" "+s1+" "+s2;
    cout<<"\n"<<s3;
    cout<<"\n"<<s.substr(6,10);
    int d=s.find_first_of("JAJ");
    cout<<d;
    return 0;
}