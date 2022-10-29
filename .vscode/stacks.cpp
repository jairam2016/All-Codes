#include<bits/stdc++.h>
using namespace std;
struct st
{
    int size;
    int top;
    int *arr;
};
bool isFull(struct st *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return true;
    }
    return false;
}
bool isEmpty(struct st *ptr)
{
    if(ptr->top==-1)
    {
        return true;
    }
    return false;
}
void push(struct st *ptr,int val)
{
    if(isFull(ptr))
    {
        cout<<"ELEMENT NOT ENTERED BECAUSE STACK IS FULL";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct st *ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"\nSTACK IS EMPTY";
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct st *sp=(struct st*)malloc(sizeof(struct st));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    int val=0;
    cout<<"\nENTER ELEMENT INTO ARRAY:";
    cin>>val;
    push(sp,val);
    cout<<"\nENTER ELEMENT INTO ARRAY:";
    cin>>val;
    push(sp,val);
    cout<<"\nENTER ELEMENT INTO ARRAY:";
    cin>>val;
    push(sp,val);
    int out=pop(sp);
    cout<<"\nPOPED ELEMENT IS "<<out;
    cout<<"\nENTER ELEMENT INTO ARRAY:";
    cin>>val;
    push(sp,val);
    out=pop(sp);
    cout<<"\nPOPED ELEMENT IS "<<out;
    out=pop(sp);
    cout<<"\nPOPED ELEMENT IS "<<out;
    return 0;
}