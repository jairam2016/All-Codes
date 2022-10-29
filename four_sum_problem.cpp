#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> res;
    vector<int> ans;
    int arr[]={4,3,3,4,4,2,1,2,1,1};
    int target=12;
    int size=(sizeof(arr)/sizeof(int));
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int target_2=target-arr[i]-arr[j];
            int front=j+1;
            int back=size-1;
            while(front<back)
            {
                int s=arr[front]+arr[back];
                if(s<target_2)
                {
                    front++;
                }
                else if(s>target_2)
                {
                    back--;
                }
                else if(s==target_2)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[front]);
                    ans.push_back(arr[back]);

                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[front]<<" "<<arr[back]<<endl;
                    
                    res.push_back(ans);

                    while(front<back && arr[front]==ans[2])
                    {
                        ++front;
                    }
                    while(front<back && arr[back]==ans[3])
                    {
                        --back;
                    }
                }
            }
            while(j<size-1 && arr[j]==arr[j+1])
            {
                ++j;
            }
        }
        while(i<size-1 && arr[i]==arr[i+1])
            {
                ++i;
            }
    }
    return 0;
}