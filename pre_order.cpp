#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create_node(int val)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
}
void pre_order(struct node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}
void in_order(struct node *ptr)
{
    if(ptr!=NULL)
    {
        in_order(ptr->left);
        cout<<ptr->data<<"  ";
        in_order(ptr->right);
    }
}
void post_order(struct node *ptr)
{
    if(ptr!=NULL)
    {
        post_order(ptr->left);
        post_order(ptr->right);
        cout<<ptr->data<<"  ";
    }
}
int main()
{
    struct node *p=create_node(1);
    struct node *p1=create_node(2);
    struct node *p3=create_node(3);
    struct node *p4=create_node(4);
    struct node *p5=create_node(5);
    struct node *p6=create_node(6);
    struct node *p7=create_node(7);
    struct node *p8=create_node(8);
    struct node *p9=create_node(9);

    p->left=p1;
    p->right=p3;

    p1->left=p4;
    p1->right=p5;

    p3->left=p6;
    p3->right=p7;

    p6->left=p8;
    p6->left=p9;

    pre_order(p);
    cout<<endl;
    
    in_order(p);
    
    cout<<endl;
    post_order(p);
    return 0;
}