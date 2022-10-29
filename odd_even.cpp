#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> array;
    int size=0;
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>size;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<size;i++)
    {
        int val=0;
        cout<<"\nENTER THE VALUE OF THE POSITION ",i+1;
        cin>>val;
        array.push_back(val);
        if(val%2==0)
        {
            even.push_back(val);
        }
        else
        {
            odd.push_back(val);
        }
    }
    cout<<endl;
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}