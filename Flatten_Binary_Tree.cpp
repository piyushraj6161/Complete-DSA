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

void Flatten(node *root)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->left != NULL)
    {
        Flatten(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    Flatten(root->right);
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
    Flatten(root);
    cout << "In_order : ";
    In_order(root);
    cout << endl;
   
    return 0;
}