#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head1=(struct node*)malloc(sizeof(struct node));
struct node *ptr1=(struct node*)malloc(sizeof(struct node));
struct node *head2=(struct node*)malloc(sizeof(struct node));
struct node *ptr2=(struct node*)malloc(sizeof(struct node));
struct node *head3=(struct node*)malloc(sizeof(struct node));
struct node *ptr3=head3;
struct node *head=ptr3;
struct node *temp=ptr3;
int c1=0;
int c2=0;
void insert1(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(c1==0)
    {
        head1->data=val;
        head1->next=NULL;
        c1=c1+1;
    }
    else
    {
        ptr1=head1;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=temp;
        temp->next=NULL;
        ptr1=head1;
    }
}
void insert2(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(c2==0)
    {
        head2->data=val;
        head2->next=NULL;
        c2=c2+1;
    }
    else
    {
        ptr2=head2;
        while(ptr2->next!=NULL)
        {
            ptr2=ptr2->next;
        }
        ptr2->next=temp;
        temp->next=NULL;
        ptr2=head2;
    }
}
void display()
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
void merge_linked_list()
{
    ptr3->data=0;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            

        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    ptr3->next=NULL;
    display();
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<"->";
        ptr1=ptr1->next;
    }
    while (ptr2!=NULL)
    {
        cout<<ptr2->data<<"->";
        ptr2=ptr2->next;
    }
    cout<<"NULL";
}
int main()
{
    insert1(1);
    insert1(2);
    insert1(4);
    insert2(3);
    insert1(6);
    insert2(5);
    insert2(7);
    insert1(8);
    insert1(9);
    insert1(15);
    insert2(12);
    insert2(14);
    merge_linked_list();
    cout<<"\nRESULT:";
    return 0;
}