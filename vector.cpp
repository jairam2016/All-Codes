#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(11);
    vec.push_back(12); 
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    int er=2;
    int len=vec.size();
    cout<<len<<endl;
    vec.insert(vec.begin()+6,10);
    cout<<vec.empty()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.erase(vec.begin()+2,vec.begin()+6);// FOR DELETION A RANGE OF SIZE SHOULD BE GIVEN
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    reverse(vec.begin(),vec.end());
    cout<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}