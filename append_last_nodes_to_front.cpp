#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *tail=(struct node*)malloc(sizeof(struct node));
int c=0;
void insert(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(c==0)
    {
        head->data=val;
        head->next=NULL;
        c=c+1;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
        ptr=head;
    }
}
void display()
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL";
}
void last_append(int k)
{
    struct node *temp=head;
    tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=head;
    for(int i=1;i<=6;i++)
    {
        head=head->next;
    }
    for(int i=1;i<=5;i++)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    cout<<"\nBEFORE APPENDING:\n";
    display();
    last_append(3);
    cout<<"\nAFTER APPENDING:\n";
    display();
    return 0;
}