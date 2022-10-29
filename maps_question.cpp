#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node* create_node(struct node *root,int val)
{
    if(root==NULL)
    {
        struct node *root=(struct node*)malloc(sizeof(struct node));
        root->data=val;
        root->right=root->left=NULL;
    }
    return root;
}
void get_horizontal_dist(struct node *root,int h_dist,map<int,vector<int>> m)
{
    if(root==NULL)
    {
        return;
    }

    m[h_dist].push_back(root->data);
    get_horizontal_dist(root->left,h_dist-1,m);
    get_horizontal_dist(root->right,h_dist+1,m);
}
int main()
{
    int h_dist=0;
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root= NULL;
    root= create_node(root,10);
    root->left= create_node(root,7);
    root->right= create_node(root,4);
    root->left->left= create_node(root,3);
    root->left->right=create_node(root,11);
    root->right->left=create_node(root,14);
    root->right->right=create_node(root,6);

    map<int,vector<int>> m;

    get_horizontal_dist(root,h_dist,m);

    map<int,vector<int>>::iterator it;
    for( it=m.begin();it!=m.end();it++)
    {
        for(int i=0;i<it->second.size();it++)
        {
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}