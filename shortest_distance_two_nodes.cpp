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
struct node* LCA(struct node *root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==n1 || root->data==n2)
    {
        return root;
    }
    node *left=LCA(root->left,n1,n2);
    node *right=LCA(root->right,n1,n2);

    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    if(left==NULL && right==NULL)
    {
        return NULL;
    }
    if(left!=NULL)
    {
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}
int dist(struct node *root,int k,int dis)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==k)
    {
        return dis;
    }
    int left=dist(root->left,k,dis+1);
    if(left!=-1)
    {
        return left;
    }
    return dist(root->right,k,dis+1);
}
int minimum_distance(struct node *root,int n1,int n2)
{
    struct node *lca=LCA(root,n1,n2);
    int d1=dist(lca,n1,0);
    int d2=dist(lca,n2,0);
    return d1+d2;
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

    cout<<minimum_distance(p,8,7);
    return 0;
}