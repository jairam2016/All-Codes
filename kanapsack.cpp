#include <bits/stdc++.h>
using namespace std;
void sort(int *val)
{
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(*(val+i)<*(val+j))
            {
                int temp=*(val+j);
                *(val+j)=*(val+i);
                *(val+i)=temp;
            }
        }
    }
}
int main()
{
    int weight[]={10,20,30,40,5};
    int max_weight=50,max_val=0,cw=0;
    int value[]={100,50,150,300,170};
    int val[]={100,50,150,300,170};
    int *ptr=val;
    sort(ptr);
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(val[i]==value[j])
            {
                if(cw+weight[j]<=max_weight)
                {
                    max_val=max_val+val[i];
                    cw=cw+weight[j];
                }
            }
        }
    }
    cout<<max_val<<"\t"<<cw;
    return 0;
}