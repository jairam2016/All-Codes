                                                 //   WRONG CODE.........STUDY AGAIN 
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
bool is_bst_tree(struct node *root,int min,int max)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data > max || root->data < min)
    {
        return false;
    }
    return is_bst_tree(root->left,min,root->data) && is_bst_tree(root->right,root->data,max);
}
bool isvalid(struct node *root)
{
    return is_bst_tree(root,-999, 999);
}
int main()
{

    struct node *p =NULL;
    p=insert_node(p,14);
    struct node *p2=insert_node(p,18);
    struct node *p3=insert_node(p,19);
    struct node *p4=insert_node(p,21);
    struct node *p5=insert_node(p,22);
    struct node *p6=insert_node(p,23);
    struct node *p7=insert_node(p,24);


    p2->left=p;
    p2->right=p3;

    p4->left=p2;
    p4->right=p6;

    p6->left=p5;
    p6->right=p7;

    if(isvalid(p))
    {
        cout<<"YES BST TREE";
    }
    else
    {
        cout<<"NOT A BST TREE";
    }
    return 0;
}