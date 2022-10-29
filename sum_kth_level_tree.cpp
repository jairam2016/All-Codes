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
int sum_k_th(struct node *root,int k)
{
    queue <node*> que;
    que.push(root);
    int level=0;
    int sum=0;
    while(que.empty()==false)
    {
        int size=que.size();
        while(size--)
        {
            struct node* ptr=que.front();
            que.pop();
            if(level==k)
            {
                sum=sum+ptr->data;
            }
            else
            {
                if(ptr->left)
                {
                    que.push(ptr->left);
                }
                if(ptr->right)
                {
                    que.push(ptr->right);
                }
            }
        }
        level++;
    }
    return sum;
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

    p3->left=p8;

    p2->left=p4;
    p2->right=p5;

    p4->left=p7;
    p5->left=p6;

    int sum=sum_k_th(p,2);
    cout<<sum;
    return 0;
}