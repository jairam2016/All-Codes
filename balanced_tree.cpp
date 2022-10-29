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
int height(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->right),height(root->left))+1;
}
bool balanced_tree(struct node *root)
{
    if(root==NULL)
    {
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1 && balanced_tree(root->left) && balanced_tree(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
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
    struct node *p8=create_node(8);


    p->left=p2;
    p->right=p3;

    p3->right=p8;
    
    p2->left=p4;
    p2->right=p5;

    p4->left=p7;
    p5->left=p6;

    if(balanced_tree(p)==true)
    {
        cout<<"\nBALANCED TREE";
    }
    else
    {
        cout<<"\nNOT BALANCED TREE";
    }
    return 0;
}