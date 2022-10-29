#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *ptr;
struct node *temp;
struct node *pointer=head;
int c=0;
void insert(int val)
{
    if(c==0)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=NULL;
        head=ptr;
        c=c+1;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
        if(val==11)
        {
            temp->next=head->next->next->next->next;
        }
    }
}
void insert_b(int val)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=val;
    p->next=head;
    head=p;
}
void display()
{
    struct node *qtr=head;
    while(qtr!=NULL)
    {
        cout<<qtr->data<<"->";
        qtr=qtr->next;
    }
    cout<<"NULL";
}
void delete_(int val)  
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    struct node *q=(struct node*)malloc(sizeof(struct node));
    p=head->next;
    q=head;
    while(p->data!=val)
    {
        p=p->next;
        q=q->next;
    }
    q->next=p->next;
}
void reverse_list()
{
    struct node *prev=NULL;
    struct node *curr=head;
    struct node *forward;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;

        prev=curr;
        curr=forward;
    }
    head=prev;
}
bool detect_cycle()
{
    struct node *slow=head;
    struct node *fast=head;
    while(slow!=fast)
    {
        if(fast==NULL || fast->next==NULL)
        {
            return false;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return true;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(8);
    insert(10);
    cout<<"\nADDING 7 IN THE BEGINNING:\n";
    insert_b(7);
    display();   
    cout<<"\nDELETING 3 FROM THE LINKED LIST:\n";
    delete_(3);
    display(); 
    cout<<"\nREVERSE THE LINKED LIST:\n";
    reverse_list();
    display();  
    insert(11);
    if(detect_cycle())
    {
        cout<<"\nCYCLE PRESENT";
    }
    else
    {
        cout<<"\nCYCLE NOT PRESENT";
    }
    return 0;
}