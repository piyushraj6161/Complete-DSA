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
node *search_BST(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == val)
    {
        return root;
    }
    if (val < root->data)
    {
        return search_BST(root->left, val);
    }
    return search_BST(root->right, val);
}
node *inorder_succ(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
node *delete_BST(node *root, int val)
{
    if (val < root->data)
    {
        root->left = delete_BST(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = delete_BST(root->right, val);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            node *temp = inorder_succ(root->right);
            root->data = temp->data;
            root->right = delete_BST(root->right, temp->data);
        }
    }
    return root;
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
    if (search_BST(root, 2) == NULL)
    {
        cout << "Key doesn't exist" << endl;
    }
    else
    {
        cout << "Key exists" << endl;
    }
    In_order(root);
    cout << endl;
    node *new_root=delete_BST(root,2);
     In_order(new_root);
    cout << endl;
    return 0;
}