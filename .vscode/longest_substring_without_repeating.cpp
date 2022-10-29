#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="bcdcbabadbaefgthy";
    int len=str.length();
    unordered_map<char,int> mpp;
    int start=0;
    int end=0;
    int max_length=0;
    for(end=0;end<len;end++)
    {
        if(mpp.find(str[end])!=mpp.end())
        {
            start=max(start,mpp[str[end]]+1);
        }
        mpp[str[end]]=end;
        max_length=max(max_length,end-start+1);
    }
    cout<<max_length;
    return 0;
}