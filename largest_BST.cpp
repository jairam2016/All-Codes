#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct INFO
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
struct node* create_node(int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=ptr->right=NULL;
    return ptr;
}
struct node *insert_node(struct node* root,int val)
{
    if(root==NULL)
    {
        return create_node(val);
    }
    if(val<root->data)
    {
        root->left=insert_node(root->left,val);
    }
    if(val>root->data)
    {
        root->right=insert_node(root->right,val);
    }
    return root;
} 
INFO largest_in_bst(struct node *root)
{
    if(root==NULL)
    {
        return {0,INT16_MIN,INT16_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL)
    {
        return {1,root->data,root->data,1,true};
    }

    INFO left_side=largest_in_bst(root->left);
    INFO right_side=largest_in_bst(root->right);

    INFO curr;
    curr.size=1+left_side.size+right_side.size;

    if(left_side.isBST && right_side.isBST && left_side.max<root->data && right_side.min>root->data)
    {
        curr.min=min(left_side.min,min(right_side.min,root->data));
        curr.max=max(right_side.max,max(left_side.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(left_side.ans,right_side.ans);
    curr.isBST=false;
    return curr;
}
void pre_order(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
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
    cout<<"\nLargest BST is "<<largest_in_bst(p).ans<<" ";
    return 0;
}