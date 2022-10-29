#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void in_order(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}
struct node* create_node(int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
struct node *insert_nodes(struct node *root,int val)
{
    if(root==NULL)
    {
       return create_node(val);
    }
    if(val<root->data)
    {
        root->left=insert_nodes(root->left,val);
    }
    else
    {
        root->right=insert_nodes(root->right,val);
    }
    return root;
}
int main()
{
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root = create_node(2);
    root = insert_nodes(root, 45);  
    root = insert_nodes(root, 41);  
    root = insert_nodes(root, 30);  
    root = insert_nodes(root, 50);  
    root = insert_nodes(root, 25);  
    root = insert_nodes(root, 35);  
    root = insert_nodes(root, 45);  
    root = insert_nodes(root, 60);  
    root = insert_nodes(root, 4);  

    in_order(root);
    return 0;
}