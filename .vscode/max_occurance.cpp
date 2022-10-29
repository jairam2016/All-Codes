#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="";int count=0,max=0;
    char index;
    int i;
    cout<<"ENTER THE STRING: ";
    getline(cin,str);
    int len=str.length();
    for(i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        { 
           if(str[i]==str[j] && str[j]!=' ')
           {
                count++;
                if(count>max)
                {
                    max=count;
                    index=str[j];
                }
           }
        }
     count=0;
    }
    cout<<"\nMAX OCCURANCE CHAR IS "<<index<<" THAT IS "<<max;
    return 0;
}