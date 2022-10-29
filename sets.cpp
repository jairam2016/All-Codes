#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  PRINTS UNIQUE STRINGS IN SORTED ORDER
    multiset<int>s;
    // s.insert("abc");
    // s.insert("zbc");
    // s.insert("abc");
    // s.insert("fgh");
    // s.insert("gfr");  
    s.insert(12);
    s.insert(15);
    s.insert(1);
    s.insert(5);
    s.insert(13);
    s.insert(8);
    s.insert(10);
    // s.erase("abc");       //THIS WILL ERASE ALL THE VALUES OF SET 'S'  //   
    // auto it=s.find("abc");
    // if(it!=s.end())
    // {
    //     s.erase(it);
    // }
    for(auto val:s)
    {
        cout<<val<<endl;
    }
    // auto it=s.find("abc");
    // if(it==s.end())
    // {
    //     cout<<"no values"<<endl;
    // }                                                                                               
    // else
    // {
    //     cout<<"yes";
    // }
    return 0;
}