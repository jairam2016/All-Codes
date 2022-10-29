#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,7,2};
    int ma=*max_element(arr,arr+3);
    cout<<ma<<endl;
    do
    {
        cout<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    while(next_permutation(arr,arr+3));

    // BINARY SEARCH
    int arr1[]={1,2,5,6,9,11,12};
    if(binary_search(arr1,arr1+7,11))
    {
        cout<<"\nPRESENT\n";
    }
    else
    {
        cout<<" NOT PRESENT";
    }

    int arr2[]={1,2,3,4,6,7,8,9};
    auto it=lower_bound(arr2,arr2+9,5)-arr2;
    cout<<endl<<it;
    auto it2=upper_bound(arr2,arr2+9,5);
    cout<<endl<<*it2;
    //LOWER BOUNFD ALWAYS GIVE THE EXACT VALUE OR THE NEXT VALUE IF THE VALUE IS NOT FOUND
    //UPPER BOUND ALWAYS GIVE THE VALUE OF THE NEXT ELEMENT OF THE SEARCHED ELEMENT
    cout<<"\n";
    sort(arr2,arr2+8,greater<int>());
    for(int i=0;i<8;i++)
    {
        cout<<arr2[i]<<"    ";
    }
    return 0;
}