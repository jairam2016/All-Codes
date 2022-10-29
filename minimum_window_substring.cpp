#include<bits/stdc++.h>
using namespace std;
int main()
{
    string put="";
    int s=0;
    string str="geeksforgeeks";
    string pattern="ksrg";
    vector<pair<string,int>> vec;
    int str1=str.length();
    string t="";
    int patt1=pattern.length();
    for(int i=0;i<str1;i++)
    {
        put="",s=0;
        for(int j=i;j<str1;j++)
        {
            // for(int k=i;k<=j;k++)
            {
                put=put+str[j];
                s=put.length();
                vec.push_back(make_pair(put,s));
            }
        }
    }
    int len=0,c=0,fi=999;
    vector<pair<string,int>> :: iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        len=0;
        t=it->first;
        for(int i=0;i<it->second;i++)
        {
            for(int j=0;j<patt1;j++)
            {
                if(pattern[j] && t[i])
                {
                    len=len+1;
                }
                // else
                // {
                //     c=c+1;
                // }
            }
        }
        fi=min(fi,len);
    }
    cout<<fi;
    return 0;
}