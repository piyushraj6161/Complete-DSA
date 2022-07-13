#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sum_replace(node *root)
{
    if (root == NULL)
    {
        return;
    }
    sum_replace(root->left);
    sum_replace(root->right);
    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}
void Pre_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Pre_order(root->left);
    Pre_order(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "Pre_order(Before sum_replace) : ";
    Pre_order(root);
    cout << endl;
    sum_replace(root);
    cout << "Pre_order(After sum_replace)  : ";
    Pre_order(root);
    cout << endl;
    return 0;
}