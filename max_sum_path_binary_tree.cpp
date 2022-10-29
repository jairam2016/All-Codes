#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
}
int max_sum_path(struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    int left = max_sum_path(root->left);
    int ri = max_sum_path(root->right);

    int MS = max(max(left, ri) + root->data, root->data);
    int m21 = max(MS, left + ri + root->data);

    int result = max(MS, m21);
    return result;
}
int main()
{
    struct node *p = create_node(1);
    struct node *p2 = create_node(2);
    struct node *p3 = create_node(-3);
    struct node *p4 = create_node(4);
    struct node *p5 = create_node(5);
    struct node *p6 = create_node(6);
    struct node *p7 = create_node(7);

    p->left = p2;
    p->right = p3;

    p2->left = p4;
    p2->right = p5;

    p4->left = p7;
    p5->left = p6;

    cout << max_sum_path(p);
    return 0;
}