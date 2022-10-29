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
int calc_height(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(calc_height(root->left),calc_height(root->right))+1;
}
int print_diameter(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l_height=calc_height(root->left);
    int r_height=calc_height(root->right);
    int height=l_height+r_height+1;

    int l_dia=print_diameter(root->left);
    int r_dia=print_diameter(root->right);

    int maximum=max(height,max(l_dia,r_dia));

    return maximum;
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

    cout<<print_diameter(p);
    return 0;
}