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
bool is_BST(node *root, node *min = NULL, node *max = NULL)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }
    // cout<<"min : "<<min->data<<" max : "<<max->data<<endl;
    bool left_valid = is_BST(root->left, min, root);
    // cout<<"min : "<<min->data<<" max : "<<max->data<<endl;
    bool right_valid = is_BST(root->right, root, max);
    return (left_valid & right_valid);
}

/*        4
        /   \
       2     5
      / \     \
     1   3     6
*/

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    root->right->right->left = new node(19);
    if (is_BST(root, NULL, NULL))
    {
        cout << "Valid BST" << endl;
    }
    else
    {
        cout << "Invalid BST" << endl;
    }

    return 0;
}