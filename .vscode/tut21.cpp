#include <bits/stdc++.h>
using namespace std;
class binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
};
void binary::read(void)
{
    cout<<"\nENTER A BINARY NUMBER:";
    cin>>s;
    chk_bin();
}

void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"\nINCORRECT BINARY FORMAT"<<endl;
            break;
        }
    }
}
int main()
{
    binary b;
    b.read();   
    return 0;
}