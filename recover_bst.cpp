#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calcpointers(struct node *root,struct node **first,struct node **mid,struct node **end,struct node **prev)
{
    if(root==NULL)
    {
        return;
    }
    calcpointers(root->left,first,mid,end,prev);
    if(*prev && root->data > (*prev)->data)
    {
        if(!*first)
        {
            *first=*prev;
            *mid=root;
        }
        else
        {
            *end=root;
        }
        *prev=root;
    }
    calcpointers(root->right,first,mid,end,prev);
}
void restore_bst(struct node *root)
{
    struct node *first,*mid,*end,*prev;
    first=NULL;
    mid=NULL;
    end=NULL;
    prev=NULL;

    calcpointers(root,&first,&mid,&end,&prev);
    if(first && end)
    {
        swap(&(first->data),&(end->data));
    }
     if(first && mid)
    {
        swap(&(first->data),&(end->data));
    }
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    struct node *root=new node(6);
    root->left=new node(9);
    root->right=new node(3);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right->right=new node(13);

    inorder(root);
    cout<<endl;
    restore_bst(root);
    inorder(root);

    return 0;
}