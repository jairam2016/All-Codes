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
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
}
struct node *LCA(struct node *root,int start,int end)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==start || root->data==end)
    {
        return root;
    }
    struct node *lleft=LCA(root->left,start,end);
    struct node *lright=LCA(root->right,start,end);

    if(lleft && lright)
    {
        return root;
    }
    if(lleft!=NULL)
    {
        return lleft;
    }
    return lright;
}
int main()
{
    struct node *p=create_node(1);
    struct node *p2=create_node(2);
    struct node *p3=create_node(3);
    struct node *p4=create_node(4);
    struct node *p5=create_node(5);
    struct node *p6=create_node(6);
    struct node *p7=create_node(7);

    p->left=p2;
    p->right=p3;

    p2->left=p4;
    p2->right=p5;

    p4->left=p7;
    p5->left=p6;

    struct node *lca=LCA(p,2,3);
    if(lca==NULL)
    {
        cout<<"\nNO COMMON ANCESTOR";
    }
    else
    {
        cout<<lca->data;
    }
    return 0;
}