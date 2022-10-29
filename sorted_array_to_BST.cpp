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
struct node* insert_node(struct node* root,int val)
{
    if(root==NULL)
    {
        return create_node(val);
    }
    if(root->data > val)
    {
        root->left=insert_node(root->left,val);
    }
    if(root->data < val)
    {
        root->right=insert_node(root->right,val);
    }
    return root;
}
struct node* create_BST(int arr[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid=(start+end)/2;
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root=NULL;
    root=insert_node(root,arr[mid]);
    root->left=create_BST(arr,start,mid-1);
    root->right=create_BST(arr,mid+1,end);
    return root;
}
void pre_order(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->right);
    pre_order(root->left);
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    struct node *root=create_BST(arr,0,6);
    pre_order(root);
    return 0;
}