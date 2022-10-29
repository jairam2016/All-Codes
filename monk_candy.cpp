#include <bits/stdc++.h>
using namespace std;
void sorted_array(int *arr, int *size)
{
    for(int i=0;i<*size;i++)
    {
        for(int j=i+1;j<*size;j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    return;
}
int main()
{
    int bags=0,minutes=0,count=0;
    cout<<"\nENTER THE NUMBER OF BAGS: ";
    cin>>bags;
    int arr[bags]={0};
    int *ptr=arr;
    cout<<"\nNO OF MINUTES: ";
    cin>>minutes;
    for(int i=0;i<bags;i++)
    {
        cout<<"\nNO OF CANDIES IN BAG "<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<minutes;i++)
    {
        sorted_array(arr,&bags);
        count=count+arr[0];
        arr[0]=arr[0]/2;
    }
    cout<<"\nMAX IS:"<<count;
    return 0;
}