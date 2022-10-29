#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *create_node(int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}
void pre_order(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    pre_order(root->left);
    pre_order(root->right);
}
struct node *create_bst(int arr[],int start,int len)
{
    if(start>len)
    {
        return NULL;
    }

    struct node *root=(struct node*)malloc(sizeof(struct node));
    root=create_node(arr[start]);
    int i=0;
    for(i=start+1;i<=len;i++)
    {
        if(arr[i]>root->data)
        {
            break;
        }
    }
    root->left=create_bst(arr,start+1,i-1);
    root->right=create_bst(arr,i,len);

    return root;
}
int main()
{
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root=NULL;
    int arr[]={10,4,2,8,5,9,15,12,20};
    int len=sizeof(arr)/sizeof(int);
    int start=0;
    root=create_bst(arr,start,len-1);
    pre_order(root);
    return 0;
}