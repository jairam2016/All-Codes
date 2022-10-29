#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int val)
{
    struct node *ptr=new node;
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void get_vertical_dist(struct node *root,int hdis,map<int,vector<int>> mp)
{
    if(root==NULL)
    {
        return;
    }
    mp[hdis].push_back(root->data);
    get_vertical_dist(root->left,hdis-1,mp);
    get_vertical_dist(root->right,hdis+1,mp);
}
int main()
{
    struct node *root=NULL;
    root=newNode(10);
    root->left=newNode(7);
    root->right=newNode(4);
    root->left->left=newNode(3);
    root->left->right=newNode(11);
    root->right->left=newNode(14);
    root->right->right=newNode(6);

    map<int,vector<int>> mp;
    int hdis=0;

    get_vertical_dist(root,hdis,mp);

    map<int,vector<int>> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++)
    {
        for(int i=0;i<(it->second).size();i++)
        {
            cout<<(it->second)[i]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}