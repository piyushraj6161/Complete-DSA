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
void In_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    In_order(root->left);
    cout << root->data << " ";
    In_order(root->right);
}
void Post_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Post_order(root->left);
    Post_order(root->right);
    cout << root->data << " ";
}
/*         1
          /  \
         2    3
        / \  / \
       4   5 6  7
*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "Pre_order : ";
    Pre_order(root);
    cout << endl;
    cout << "In_order : ";
    In_order(root);
    cout << endl;
    cout << "Post_order : ";
    Post_order(root);
    cout << endl;
    return 0;
}