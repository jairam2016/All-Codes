#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   //cout<<"\nENTER THE STRING HERE:";
   //getline(cin,str);
    str="THIS IS C LANGUAGE";
    string str1="C++";
    str.replace(8,1,str1);
    cout<<str<<"\n";
    cout<<str.find("C++");
    cout<<endl<<str.find_first_of('L');
    cout<<endl<<str.insert(8," ");
    cout<<endl<<str.insert(8,"best",4);
    str.assign("i am loving to code");
    cout<<endl<<str;
    str.erase(str.find("to code"));
    cout<<endl<<str;
    cout<<endl<<str+"C++";
//    for(int i=str.length()-1;i>=0;i--)
//    {
//         cout<<str[i];
//    }
}