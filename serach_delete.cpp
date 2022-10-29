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
void in_order(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    in_order(root->left);
    cout<<root->data<<"  ";
    in_order(root->right);

}
struct node* search_node(struct node* root,int ele)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data > ele)
    {
        return search_node(root->left,ele);
    }
    if(root->data < ele)
    {
        return search_node(root->right,ele);
    }
    if(root->data==ele)
    {
        return root;
    }
}
struct node* in_order_successor(struct node *root)
{
    struct node *temp=root;
    while(temp && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
struct node* delete_node(struct node *root,int val)
{
    if(root->data > val)
    {
       root->left= delete_node(root->left,val);
    }
    else if(root->data < val)
    {
        root->right= delete_node(root->right,val);
    }
    else
    {
        if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }

        struct node *next_ele = in_order_successor(root->right);
        root->data=next_ele->data;
        root->right=delete_node(root->right,next_ele->data);
    }
    return root;
}
int main()
{
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root=create_node(2);
    root = insert_node(root, 45);  
    root = insert_node(root, 25);
    root = insert_node(root, 15);
    root = insert_node(root, 7);
    root = insert_node(root, 17);
    root = insert_node(root, 16);
    root = insert_node(root, 22);
    root = insert_node(root, 20);
    root = insert_node(root, 24);
    root = insert_node(root, 31);
    root = insert_node(root, 32);
    root = insert_node(root, 33);
    root = insert_node(root, 23);  
    root = insert_node(root, 41);  
    root = insert_node(root, 30);  
    root = insert_node(root, 50);  
    root = insert_node(root, 25);  
    root = insert_node(root, 37);  
    root = insert_node(root, 45);  
    root = insert_node(root, 60);  
    root = insert_node(root, 4);  

    in_order(root);
    if(search_node(root,30)==NULL)
    {
        cout<<"\nVALUE DOES NOT EXSIST";
    }
    else
    {
        cout<<"\nYES THE VALUE EXSISTS";
    }
    root=delete_node(root,37);
    cout<<endl;
    in_order(root);
    return 0;
}