#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T=0;
    cin>>T;
    vector<int> vec[T];int c=0;
    while(T--)
    {
        int N=0;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        next_permutation(arr,arr+N);

        for(int i=0;i<N;i++)
        {
            vec[c].push_back(arr[i]);
        }
        // cout<<endl;
        c++;
    }
    
    vector<int> :: iterator it;
    for(int i=0;i<T;i++)
    {
        for(it=vec[i].begin();it!=vec[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}